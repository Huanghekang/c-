#include<stdio.h>
int main(){
	int number;
	printf("请用户输入一个数。\n");
	scanf("%d",&number);
	int jc=1;
	do{
	jc=jc*number;
	number--;
	}
	while(number!=0);
	printf("阶乘为%d",jc);
} 
