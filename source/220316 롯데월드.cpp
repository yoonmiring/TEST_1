#include <stdio.h>

int main(){
	int choose,ticket,number,orderCount,discount,price;
	const int  BABY_PRICE =15000, ALL_DAY_ADULT_PRICE = 59000,ALL_AFTER_ADULT_PRICE = 48000, ALL_DAY_TEEN_PRICE = 52000, ALL_AFTER_TEEN_PRICE = 42000, ALL_DAY_CHILD_PRICE = 47000,ALL_AFTER_CHILD_PRICE = 36000;//���հ��� 
	const int  PARK_DAY_ADULT_PRICE = 56000,PARK_AFTER_ADULT_PRICE = 45000, PARK_DAY_TEEN_PRICE = 50000, PARK_AFTER_TEEN_PRICE = 40000, PARK_DAY_CHILD_PRICE = 46000,PARK_AFTER_CHILD_PRICE = 35000;//��ũ ����
	 
	
	printf("�������ּ���.\n1. �����̿��(�Ե�����+�μӹڹ���)  \n2. ��ũ�̿��\n");
	scanf("%d",&choose);
	printf("������ �����ϼ���.\n1. 1DAY \n2. AFTER4(���� 4�� ���� ����)\n");
	scanf("%d",&ticket);
	printf("�ֹι�ȣ�� �Է��ϼ���.\n");
	scanf("%d",&number);
	printf("��� �ֹ��Ͻðڽ��ϰ�?(�ִ� 10��)\n");
	scanf("%d",&orderCount);
	printf("�������� �����ϼ���.\n1. ����(���� ���� �ڵ�ó��)\n2. �����\n3. ����������\n4. ���ڳ�\n5.�ӻ��\n");
	scanf("%d",&discount);


	printf("������ %d�� �Դϴ�.",price);
	
	
	
	
	
	
	
return 0 ;  
}


