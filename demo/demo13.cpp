#include<stdio.h>
int main(){
	int count=0;
	int sum=0;
	int number=0;
	printf("���û�����������-1������\n"); 
	do{
		scanf("%d",&number);
		if(number!=-1){
			sum=sum+number;
			count++;
		}
	}while(number!=-1);
	printf("ƽ����Ϊ%d",sum/count) ;
	 
} 
