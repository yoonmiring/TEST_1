#include <stdio.h>

int main(){
	int choose,ticket,FrontNumber,BackNumber,orderCount,discount,price;
	const int  ALL_DAY_ADULT_PRICE = 59000,ALL_AFTER_ADULT_PRICE = 48000, ALL_DAY_TEEN_PRICE = 52000, ALL_AFTER_TEEN_PRICE = 42000, ALL_DAY_CHILD_PRICE = 47000,ALL_AFTER_CHILD_PRICE = 36000;//종합가격 
	const int  PARK_DAY_ADULT_PRICE = 56000,PARK_AFTER_ADULT_PRICE = 45000, PARK_DAY_TEEN_PRICE = 50000, PARK_AFTER_TEEN_PRICE = 40000, PARK_DAY_CHILD_PRICE = 46000,PARK_AFTER_CHILD_PRICE = 35000;//파크 가격
	const int  BABY_PRICE =15000, ADULT_PRICE = 45000, TEEN_PRICE = 40000, CHILD_PRICE = 35000;// 기본가격
	int numberYear,birth,age,oldage,newage; 

	printf("선택해주세요.\n1. 종합이용권(롯데월드+민속박물관)  \n2. 파크이용권\n");
	scanf("%d",&choose);
	printf("권종을 선택하세요.\n1. 1DAY \n2. AFTER4(오후 4시 이후 입장)\n");
	scanf("%d",&ticket);
	printf("주민번호 앞자리 6자글자와 뒷자리 1자리를 입력하세요.\n 앞자리(6글자)\n");
	scanf("%06d",&FrontNumber);
	printf("뒷자리(1글자)\n");
	scanf("%1d",&BackNumber);	
	printf("몇개를 주문하시겠습니가?(최대 10개)\n");
	scanf("%d",&orderCount);
	printf("우대사항을 선택하세요.\n1. 없음(나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다둥이 행복\n5. 임산부\n6. 휴가장병 \n");
	scanf("%d",&discount);

		
		numberYear =FrontNumber/10000; //생년 출력
		birth= FrontNumber-(numberYear * 10000); // 생일 출력
		
		 if (BackNumber == 1 || BackNumber == 2){ // 1900년생 || 2000년생 출력 
		 	oldage = numberYear + 1900;
		 } else if (BackNumber == 3 || BackNumber == 4){  //해결안됨  
		 	newage = numberYear + 2000;
		 }



		if( birth > 316 && oldage < 2000){  //만나이
			age= 2022 - oldage -1;
			}
			else if (birth <= 316 && oldage < 2000){
			age = 2022 - oldage;
			}
			
		 if (birth > 316 && newage >= 2000){
			age = 2022 - newage-1;
			}
			else if (birth <= 316 && newage >= 2000){
			age = 2022 - newage;
			}
	

	

		switch(choose){
			case 1 :
				switch(ticket){
				case 1:
				if ( age <=3 ){
					printf("가격은 %d원 입니다.\n감사합니다.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE+12000);
					}	else if ( age >12 && age <= 18){
					printf("가격은 %d원 입니다.\n감사합니다.",TEEN_PRICE+12000);
					}	else if ( age >19 && age <= 64){
					printf("가격은 %d원 입니다.\n감사합니다.",ADULT_PRICE+14000);
					}	else if ( age >= 65){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE+12000);
		}

				break;
				case 2:
					if ( age <=3 ){
					printf("가격은 %d원 입니다.\n감사합니다.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE+1000);
					}	else if ( age >12 && age <= 18){
					printf("가격은 %d원 입니다.\n감사합니다.",TEEN_PRICE+2000);
					}	else if ( age >19 && age <= 64){
					printf("가격은 %d원 입니다.\n감사합니다.",ADULT_PRICE+3000);
					}	else if ( age >= 65){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE+1000);
				break;
				}
		}
				break;
			case 2 :
				switch(ticket){
				case 1:
					if ( age <=3 ){
					printf("가격은 %d원 입니다.\n감사합니다.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE+11000);
					}	else if ( age >12 && age <= 18){
					printf("가격은 %d원 입니다.\n감사합니다.",TEEN_PRICE+10000);
					}	else if ( age >19 && age <= 64){
					printf("가격은 %d원 입니다.\n감사합니다.",ADULT_PRICE+11000);
					}	else if ( age >= 65){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE+11000);
					}
				break;
				case 2:
					if ( age <=3 ){
					printf("가격은 %d원 입니다.\n감사합니다.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE);
					}	else if ( age >12 && age <= 18){
					printf("가격은 %d원 입니다.\n감사합니다.",TEEN_PRICE);
					}	else if ( age >19 && age <= 64){
					printf("가격은 %d원 입니다.\n감사합니다.",ADULT_PRICE);
					}	else if ( age >= 65){
					printf("가격은 %d원 입니다.\n감사합니다.",CHILD_PRICE);
					}
				break;
				}
				break;
			default:
				printf("잘 못 입력하셨습니다. ");
	}





	
	
	
	
	
	
return 0 ;  
}


