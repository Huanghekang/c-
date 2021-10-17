#include<stdio.h>
int main() {
	int sushu;
	int i;
	int z;
	printf("输入一个数以判断其是否为素数。\n");
	for(z=1;z<=100;z++) {
		int isprime=1;/*该处的int isprime的值应该放入循环体内，
		                       否则将会出现问题，让i是prime一直为0*/ 
		sushu=z;
		for(i=2;i<sushu;i++) {
		if (sushu%i==0){
			isprime=0;
		}
	}
	if (isprime==1){
		printf("%d为素数。 \n",sushu); 
	} 
	 else{
	 	printf("%d不是素数。\n",sushu); 
	 }
	}

}
