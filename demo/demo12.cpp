#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	int a=rand()%100+1;;
	printf("0-100����������Ѿ����������û��²⡣\n");
	int count=0;
	int number=0;
	do{
		scanf("%d",&number);
		count++;
		if(number>a){
			printf("���µ����ִ��ڸ����֡�\n");
		}
		else {
			printf("���µ�����С�ڸ����֡�\n");
		}
	} while (a!=number); 
	
	printf("��ϲ������%d�β��и����֡�\n",count);
}

 
