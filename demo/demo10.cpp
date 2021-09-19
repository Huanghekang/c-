#include<stdio.h>
int main(){
	int number;
	printf("请输入一个四位数以内且大于0的整数。\n");
	scanf("%d",&number);
	if (number>999){
		printf("该数字为一个四位数。");
	}
	 else if(number>=100&&number<1000) {
	 	printf("该数字为一个三位数。");
	  }
	 else if(number>=10&&number<100) {
	 	printf("该数字为一个两位数。");
	 }
	 else {
	 	printf("该数字为一位数字。");
	 }
	 return 0; 
} 
