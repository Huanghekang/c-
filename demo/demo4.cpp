#include <stdio.h>
int main(){
	int cm;
	printf("������һ��������");
	scanf("%d",&cm);
    int foot=cm/30.48;/*�������ֵ�Ӣ��*/
    int inch=(cm/30.48-foot)*12;/*С�����ֵ�Ӣ��ת��ΪӢ��*/
	printf("Ӣ��Ϊ%d,Ӣ��Ϊ%d",foot,inch); 
     
	
	
	 
} 
