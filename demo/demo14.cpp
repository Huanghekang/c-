#include<stdio.h>
int main(){
	int number;
	printf("请用户输入一个数字。");
	scanf("%d",&number);
	int ret=0;
	while(number!=0){
	int gewei=number%10;
	 ret=ret*10+gewei;
	number=number/10;
	
	}
	printf("倒叙后数字为%d",ret);
	return 0; 
	
} 
