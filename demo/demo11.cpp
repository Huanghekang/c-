#include<stdio.h>
int main(){
	int n=0;
	int number;
	printf("请输入一个整数。\n");
	scanf("%d",&number);
	n++;
	number/=10;
	while(number/10>0){
		n++;
		number=number/10;
	}
	printf("该数字为%d位整数。\n",n); 
} 
