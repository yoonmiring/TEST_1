#include <stdio.h>

int main(){
	int choose,ticket,FrontNumber,BackNumber,orderCount,discount,price;
	const int  ALL_DAY_ADULT_PRICE = 59000,ALL_AFTER_ADULT_PRICE = 48000, ALL_DAY_TEEN_PRICE = 52000, ALL_AFTER_TEEN_PRICE = 42000, ALL_DAY_CHILD_PRICE = 47000,ALL_AFTER_CHILD_PRICE = 36000;//���հ��� 
	const int  PARK_DAY_ADULT_PRICE = 56000,PARK_AFTER_ADULT_PRICE = 45000, PARK_DAY_TEEN_PRICE = 50000, PARK_AFTER_TEEN_PRICE = 40000, PARK_DAY_CHILD_PRICE = 46000,PARK_AFTER_CHILD_PRICE = 35000;//��ũ ����
	const int  BABY_PRICE =15000, ADULT_PRICE = 45000, TEEN_PRICE = 40000, CHILD_PRICE = 35000;// �⺻����
	int numberYear,birth,age,oldage,newage; 

	printf("�������ּ���.\n1. �����̿��(�Ե�����+�μӹڹ���)  \n2. ��ũ�̿��\n");
	scanf("%d",&choose);
	printf("������ �����ϼ���.\n1. 1DAY \n2. AFTER4(���� 4�� ���� ����)\n");
	scanf("%d",&ticket);
	printf("�ֹι�ȣ ���ڸ� 6�ڱ��ڿ� ���ڸ� 1�ڸ��� �Է��ϼ���.\n ���ڸ�(6����)\n");
	scanf("%06d",&FrontNumber);
	printf("���ڸ�(1����)\n");
	scanf("%1d",&BackNumber);	
	printf("��� �ֹ��Ͻðڽ��ϰ�?(�ִ� 10��)\n");
	scanf("%d",&orderCount);
	printf("�������� �����ϼ���.\n1. ����(���� ���� �ڵ�ó��)\n2. �����\n3. ����������\n4. �ٵ��� �ູ\n5. �ӻ��\n6. �ް��庴 \n");
	scanf("%d",&discount);

		
		numberYear =FrontNumber/10000; //���� ���
		birth= FrontNumber-(numberYear * 10000); // ���� ���
		
		 if (BackNumber == 1 || BackNumber == 2){ // 1900��� || 2000��� ��� 
		 	oldage = numberYear + 1900;
		 } else if (BackNumber == 3 || BackNumber == 4){  //�ذ�ȵ�  
		 	newage = numberYear + 2000;
		 }



		if( birth > 316 && oldage < 2000){  //������
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
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE+12000);
					}	else if ( age >12 && age <= 18){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",TEEN_PRICE+12000);
					}	else if ( age >19 && age <= 64){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",ADULT_PRICE+14000);
					}	else if ( age >= 65){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE+12000);
		}

				break;
				case 2:
					if ( age <=3 ){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE+1000);
					}	else if ( age >12 && age <= 18){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",TEEN_PRICE+2000);
					}	else if ( age >19 && age <= 64){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",ADULT_PRICE+3000);
					}	else if ( age >= 65){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE+1000);
				break;
				}
		}
				break;
			case 2 :
				switch(ticket){
				case 1:
					if ( age <=3 ){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE+11000);
					}	else if ( age >12 && age <= 18){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",TEEN_PRICE+10000);
					}	else if ( age >19 && age <= 64){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",ADULT_PRICE+11000);
					}	else if ( age >= 65){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE+11000);
					}
				break;
				case 2:
					if ( age <=3 ){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",BABY_PRICE);
					}	else if ( age >3 && age <= 12){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE);
					}	else if ( age >12 && age <= 18){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",TEEN_PRICE);
					}	else if ( age >19 && age <= 64){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",ADULT_PRICE);
					}	else if ( age >= 65){
					printf("������ %d�� �Դϴ�.\n�����մϴ�.",CHILD_PRICE);
					}
				break;
				}
				break;
			default:
				printf("�� �� �Է��ϼ̽��ϴ�. ");
	}





	
	
	
	
	
	
return 0 ;  
}


