#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	printf("��������������");
	scanf("%d %d %d",&a,&b,&c);
	int number=a*100+b*10+c;
	int number1=a*a*a+b*b*b+c*c*c;
	if(number=number1){
		printf("����Ϊˮ�ɻ�����/n"); 
	}
	else {
		printf("������ˮ�ɻ�����/n"); 
	}
}
