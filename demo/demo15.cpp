#include<stdio.h>
int main(){
	int number;
	printf("���û�����һ������\n");
	scanf("%d",&number);
	int jc=1;
	do{
	jc=jc*number;
	number--;
	}
	while(number!=0);
	printf("�׳�Ϊ%d",jc);
} 
