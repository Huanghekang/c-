/*已知正整数a,b（1<=a<=100,1<=b<=10000),求a的b次方的末三位数*/
/*该题的技巧在于因为结果会溢出，所以用每个数的末三位数算，例如2151*2151的末三位结果
等于151*151的末三位数。*/
#include<stdio.h>
int main(){
	int a;
	int b;
	int j=1;
	int i;
	printf("请输入a的值。\n");
	scanf("%d",&a);
	printf("请输入b的值。\n");
	scanf("%d",&b);
	if(a>=1&&a<=100&&b>=1&&b<=10000){
		for(i=1;i<=b;i++){
		   j=a*j;
		   if(j>10000){
		   	j=j%1000;
		   } 
		}
		
		printf("a的b次方末三位为%d",j); 
	} 
	
}

