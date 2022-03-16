#include <stdio.h>

int main(){
	int number, numberFront,birth;
	int age, age2;
	
	printf("주민번호 앞자리 입력:");
	scanf("%d",&number);
	
	numberFront =number/10000; // 생년 출력
	 //나이계산
	  
	if( numberFront <= 99 &&numberFront > 22){
		age= 2022 - (numberFront+1900)+1;
	}else if (numberFront <=22 ){
		age = 2022 -(numberFront+2000)+1;
	}
	
	birth= number-(numberFront * 10000); //생일 출 력
	//만나이 계산
 printf("%d",birth);
	if( birth > 315 ){
		age2= 2022 - (numberFront+1900)-1;
	}else if (birth > 315){
		age2 = 2022 -(numberFront+2000)-1;
	}else if (birth < 315){
		age2 = 2022 -(numberFront+1900);
		}else if (birth < 315){
		age2 = 2022 -(numberFront+2000);
}
	
	printf("오늘 (2022년 3월 15일)기준 나이는 %d세, 만 나이는 %d 세 입니다.",age, age2);
	
}
