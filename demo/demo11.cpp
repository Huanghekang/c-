#include<stdio.h>
int main(){
	int n=0;
	int number;
	printf("������һ��������\n");
	scanf("%d",&number);
	n++;
	number/=10;
	while(number/10>0){
		n++;
		number=number/10;
	}
	printf("������Ϊ%dλ������\n",n); 
} 
