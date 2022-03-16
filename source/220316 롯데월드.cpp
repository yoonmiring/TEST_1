#include <stdio.h>

int main(){
	int choose,ticket,number,orderCount,discount,price;
	const int  BABY_PRICE =15000, ALL_DAY_ADULT_PRICE = 59000,ALL_AFTER_ADULT_PRICE = 48000, ALL_DAY_TEEN_PRICE = 52000, ALL_AFTER_TEEN_PRICE = 42000, ALL_DAY_CHILD_PRICE = 47000,ALL_AFTER_CHILD_PRICE = 36000;//종합가격 
	const int  PARK_DAY_ADULT_PRICE = 56000,PARK_AFTER_ADULT_PRICE = 45000, PARK_DAY_TEEN_PRICE = 50000, PARK_AFTER_TEEN_PRICE = 40000, PARK_DAY_CHILD_PRICE = 46000,PARK_AFTER_CHILD_PRICE = 35000;//파크 가격
	 
	
	printf("선택해주세요.\n1. 종합이용권(롯데월드+민속박물관)  \n2. 파크이용권\n");
	scanf("%d",&choose);
	printf("권종을 선택하세요.\n1. 1DAY \n2. AFTER4(오후 4시 이후 입장)\n");
	scanf("%d",&ticket);
	printf("주민번호를 입력하세요.\n");
	scanf("%d",&number);
	printf("몇개를 주문하시겠습니가?(최대 10개)\n");
	scanf("%d",&orderCount);
	printf("우대사항을 선택하세요.\n1. 없음(나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다자녀\n5.임산부\n");
	scanf("%d",&discount);


	printf("가격은 %d원 입니다.",price);
	
	
	
	
	
	
	
return 0 ;  
}


