#include <stdio.h>

int main(){
	int choose,ticket,number,orderCount,discount,cost;

	printf("선택해주세요.\n1. 종합이용권  \n2. 파크이용권\n");
	scanf("%d",&choose);
	printf("권종을 선택하세요.\n1. 1DAY \n2. AFTER\n");
	scanf("%d",&ticket);
	printf("주민번호를 입력하세요.\n");
	scanf("%d",&number);
	printf("몇개를 주문하시겠습니가?(최대 10개)\n");
	scanf("%d",&orderCount);
	printf("우대사항을 선택하세요.\n1. 없음(나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다자녀\n5.임산부\n");
	scanf("%d",&discount);


	printf("가격은 %d원 입니다.",cost) ;
	
	
	
	
	
	
	
return 0 ;  
}


