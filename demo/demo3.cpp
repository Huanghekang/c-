#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("请输入a的值");
	scanf("%d",&a);
	printf("请输入b的值");
	scanf("%d",&b); 
	c=a;
	a=b;
	b=c;
	printf("交换顺序后a的值为%d,b的值为%d",a,b);
} 
