#include <stdio.h>
int main(){
	int number;
	printf("���û�����һ������");
	scanf("%d",&number);
	  int i;
	  int isprime=1;/*������������*/
      for(i=2;i<number;i++){
      	if(number%i==0){
      		isprime=5;
      		break;
		  }
	  }	
	if(isprime==1){
		printf("����Ϊ������");
	}
	else{
		printf("��������������");
	}
	return 0;
} 
