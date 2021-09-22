#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(0));
	int a=rand()%100+1;;
	printf("0-100的随机数字已经产生，请用户猜测。\n");
	int count=0;
	int number=0;
	do{
		scanf("%d",&number);
		count++;
		if(number>a){
			printf("您猜的数字大于该数字。\n");
		}
		else {
			printf("您猜的数字小于该数字。\n");
		}
	} while (a!=number); 
	
	printf("恭喜您用了%d次猜中该数字。\n",count);
}

 
