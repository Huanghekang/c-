#include<stdio.h>
int main(){
	int number;
	printf("���û�����һ�����֡�");
	scanf("%d",&number);
	int ret=0;
	while(number!=0){
	int gewei=number%10;
	 ret=ret*10+gewei;
	number=number/10;
	
	}
	printf("���������Ϊ%d",ret);
	return 0; 
	
} 
