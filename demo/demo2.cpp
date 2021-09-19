#include <stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
    printf("请输入第一个时间"); 
	scanf("%d %d",&hour1,&minute1);
	printf("请输入第二个时间");
	scanf("%d %d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t3=t2-t1;
	printf("时间差为%d小时%d分", t3/60, t3%60);
} 
