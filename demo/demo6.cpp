#include <stdio.h>
int main(){
	printf("请输入一个三位数整数。");
	int number;
	scanf("%d",&number);
	int a=number/100;
	int b=number/10%10;
	int c=number%100%10;
	int number1=c*100+b*10+a;
	printf("%d",number1);
}
