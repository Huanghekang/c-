#include<stdio.h>
int main() {
	int sushu;
	int i;
	int z;
	printf("����һ�������ж����Ƿ�Ϊ������\n");
	for(z=1;z<=100;z++) {
		int isprime=1;/*�ô���int isprime��ֵӦ�÷���ѭ�����ڣ�
		                       ���򽫻�������⣬��i��primeһֱΪ0*/ 
		sushu=z;
		for(i=2;i<sushu;i++) {
		if (sushu%i==0){
			isprime=0;
		}
	}
	if (isprime==1){
		printf("%dΪ������ \n",sushu); 
	} 
	 else{
	 	printf("%d����������\n",sushu); 
	 }
	}

}
