#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("������a��ֵ");
	scanf("%d",&a);
	printf("������b��ֵ");
	scanf("%d",&b); 
	c=a;
	a=b;
	b=c;
	printf("����˳���a��ֵΪ%d,b��ֵΪ%d",a,b);
} 
