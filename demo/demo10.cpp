#include<stdio.h>
int main(){
	int number;
	printf("������һ����λ�������Ҵ���0��������\n");
	scanf("%d",&number);
	if (number>999){
		printf("������Ϊһ����λ����");
	}
	 else if(number>=100&&number<1000) {
	 	printf("������Ϊһ����λ����");
	  }
	 else if(number>=10&&number<100) {
	 	printf("������Ϊһ����λ����");
	 }
	 else {
	 	printf("������Ϊһλ���֡�");
	 }
	 return 0; 
} 
