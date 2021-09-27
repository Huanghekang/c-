#include<stdio.h>
int main(){
	int count=0;
	int sum=0;
	int number=0;
	printf("请用户输入整数到-1结束。\n"); 
	do{
		scanf("%d",&number);
		if(number!=-1){
			sum=sum+number;
			count++;
		}
	}while(number!=-1);
	printf("平均数为%d",sum/count) ;
	 
} 
