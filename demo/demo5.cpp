#include <stdio.h>
int main(){
  int nowtime; 
  printf("请输入现在的时间");
  scanf("%d",&nowtime);
  int hour=nowtime/100;
  int minute=nowtime%100;
  int total=hour*60+minute;
  int bytime;
  printf("请输入经过的分钟。");
  scanf("%d",&bytime);
  int total1=total+bytime;
  int hour1=total1/60;
  int minute1=total1%60;
  printf("%d%d",hour1,minute1);   
	  
  
} 
