#include <stdio.h>
int main(){
	int hour1,minute1;
	int hour2,minute2;
    printf("�������һ��ʱ��"); 
	scanf("%d %d",&hour1,&minute1);
	printf("������ڶ���ʱ��");
	scanf("%d %d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t3=t2-t1;
	printf("ʱ���Ϊ%dСʱ%d��", t3/60, t3%60);
} 
