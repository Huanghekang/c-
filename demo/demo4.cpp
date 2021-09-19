#include <stdio.h>
int main(){
	int cm;
	printf("请输入一个厘米数");
	scanf("%d",&cm);
    int foot=cm/30.48;/*整数部分的英尺*/
    int inch=(cm/30.48-foot)*12;/*小数部分的英尺转换为英寸*/
	printf("英尺为%d,英寸为%d",foot,inch); 
     
	
	
	 
} 
