#include <stdio.h>
int main(){
	int a,b,c;
	printf("请输入三个整数。");
	scanf("%d %d %d",&a,&b,&c);/*输入的前面要用空格隔开*/
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
	printf("最大值为%d",max);   
}
