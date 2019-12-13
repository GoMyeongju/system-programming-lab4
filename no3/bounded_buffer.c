#include <pthread.h>
#include <stdio.h>

#define SIZE 5

int buffer[SIZE];
int fill_ptr = 0;
int use_ptr = 0;
int count = 0;
int loops = 10;

int pthread_create( pthread_t *thread, const pthread_attr_t *attr, void *(*start)(void *), void *arg); //쓰레드 생성

void put_num(int num){

	buffer[fill_ptr] = num;
	fill_ptr = (fill_ptr + 1)%SIZE;
	count++;
}//생산자가 값 넣을 때

int get_num(){
	int temp = buffer[use_ptr];
	use_ptr = (use_ptr+1)%SIZE;
	count--;
	return temp;
}//소비자가 값 얻을 때

pthread_cond_t empty, fill;
pthread_mutex_t mutex; //값을 사용할 때 접근 제어 위한 뮤텍스


void *producer(void *arg){
	int i;
	for(i = 0; i<loops; i++){
		pthread_mutex_lock(&mutex);
		while(count == SIZE){
			pthread_cond_wait(&empty, &mutex);
		}
		put_num(i);
		pthread_cond_signal(&fill);
		pthread_mutex_unlock(&mutex);
	}
}

void *consumer(void *arg){

	int i;
	for(i = 0; i < loops; i++){
		pthread_mutex_lock(&mutex);
		while(count==0){
			pthread_cond_wait(&fill, &mutex);
		}
		int temp = get_num();
		pthread_cond_signal(&empty);
		pthread_mutex_unlock(&mutex);
		printf("%d\n", temp);
	}
}

int main(int argc, char *argv[]){

	pthread_t p, c;
	printf("main : begin producer & consumer\n");
	pthread_create(&p, NULL, producer, "producer");
	pthread_create(&c, NULL, consumer, "consumer");

	pthread_join(p, NULL);
	pthread_join(c, NULL);

	printf("main : end\n");
	return 0;
}



