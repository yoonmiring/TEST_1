#include <stdio.h>

int main(){
	int number, numberFront,birth;
	int age, age2;
	
	printf("�ֹι�ȣ ���ڸ� �Է�:");
	scanf("%d",&number);
	
	numberFront =number/10000; // ���� ���
	 //���̰��
	  
	if( numberFront <= 99 &&numberFront > 22){
		age= 2022 - (numberFront+1900)+1;
	}else if (numberFront <=22 ){
		age = 2022 -(numberFront+2000)+1;
	}
	
	birth= number-(numberFront * 10000); //���� �� ��
	//������ ���
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
	
	printf("���� (2022�� 3�� 15��)���� ���̴� %d��, �� ���̴� %d �� �Դϴ�.",age, age2);
	
}
