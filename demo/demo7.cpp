#include <stdio.h>
int main(){
	int a,b,c;
	printf("����������������");
	scanf("%d %d %d",&a,&b,&c);/*�����ǰ��Ҫ�ÿո����*/
	int max;
	if(a>b){
		if(a>c){
			max=a;
		}
		else{
			max=c; 
		}
	}
	else{
		if(c>b){
			max=c;
		}
		else{
			max=b;
		}
    }
	printf("���ֵΪ%d",max);   
}
