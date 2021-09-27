#include <stdio.h>
int main(){
	int number;
	printf("请用户输入一个数。");
	scanf("%d",&number);
	  int i;
	  int isprime=1;/*是素数的条件*/
      for(i=2;i<number;i++){
      	if(number%i==0){
      		isprime=5;
      		break;
		  }
	  }	
	if(isprime==1){
		printf("该数为素数。");
	}
	else{
		printf("该数不是素数。");
	}
	return 0;
} 
