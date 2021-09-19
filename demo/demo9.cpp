#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	printf("请输入三个数字");
	scanf("%d %d %d",&a,&b,&c);
	int number=a*100+b*10+c;
	int number1=a*a*a+b*b*b+c*c*c;
	if(number=number1){
		printf("该数为水仙花数。/n"); 
	}
	else {
		printf("该数非水仙花树。/n"); 
	}
}
