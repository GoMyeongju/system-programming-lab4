#include <stdio.h>
#include <stdlib.h>
#include <mysql.h>

void add_info(MYSQL mysql){
		
	char query[80], name[20], phone[20], address[20]; 
	int id, i, fields;

	printf(">>> 삽입할 정보 입력\n");
	printf("1. id : ");
	scanf("%d", &id);
	printf("2. name : ");
	scanf("%s", name);
	printf("3. phone(xxx-xxxx-xxxx) :");
	scanf("%s", phone);
	printf("4. address :");
	scanf("%s", address);

	sprintf(query, "insert into info values(%d, \'%s\', \'%s\', \'%s\')", id, name, phone, address);

	if(mysql_query(&mysql, query)){
		printf("MYSQL Error %d : %s\n", mysql_errno(&mysql), mysql_error(&mysql));
		exit(1);
	}else{
		printf("정상적으로 삽입되었습니다.\n");
	}

}

void select_info(MYSQL mysql){
	
	MYSQL_RES* res;
	MYSQL_ROW row;
	int fields, i;

	if(mysql_query(&mysql, "select * from info")){
		printf("MySQL Error %d : %s\n", mysql_errno(&mysql), mysql_error(&mysql));
		exit(1);
	}
	res = mysql_use_result(&mysql);
	fields = mysql_num_fields(res);
	printf("전체 주소록 조회.\n");	
	while((row = mysql_fetch_row(res))){
		for(i = 0; i<fields; i++){
			printf("%12s", row[i]);
		}
		printf("\n");
	}

	mysql_free_result(res);
}


void delete_info(MYSQL mysql){
	char query[80];
	int id;

	printf("삭제할 id를 선택하세요. : ");
	scanf("%d", &id);

	sprintf(query, "delete from info where id = %d", id);
	if(mysql_query(&mysql, query)){
		printf("MySQL Error %d : %s\n", mysql_errno(&mysql), mysql_error(&mysql));
		exit(1);
	}else{
		printf("삭제 되었습니다.\n");
	}

}


int main(){

	MYSQL mysql;
	MYSQL_RES* res;
	MYSQL_ROW row;
	mysql_init(&mysql);

	char query[80], name[20], phone[20], address[20]; 
	int id, i, fields;


	if(!mysql_real_connect(&mysql, "localhost", "root", "q", "test", 43306, (char*)NULL, 0)){
		printf("MySQL Error %d : %s\n", mysql_errno(&mysql), mysql_error(&mysql));
		exit(1);
	}


	int choice;

	while(1){
		printf("원하는 메뉴를 선택하세요.\n");
		printf("1. 조회\n");
		printf("2. 등록\n");
		printf("3. 삭제\n");
		printf("4. 종료\n");
		printf("번호 입력 :");
		scanf("%d", &choice);

		if(choice == 1){
			select_info(mysql);
		}else if(choice == 2){
			add_info(mysql);
		}else if(choice == 3){
			delete_info(mysql);
		}else if(choice == 4){
			break;
		}else{
			printf("번호를 다시 확인해주세요.\n");
		}
	}

}
