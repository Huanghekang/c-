#include <stdio.h>
int main() {
	int score=0;
	printf("��������ĳɼ���");
	scanf("%d",&score);
	if(score>=90) {
		printf("��ĳɼ�ΪA"); 
	} 
	else if(score<90&&score>=80){
		printf("��ĳɼ�ΪB"); 
	}
	else if(score<80&&score>=70){
		printf("��ĳɼ�ΪC"); 
	}
	else if(score<70&&score>=60){
		printf("��ĳɼ�ΪD"); 
	}
	else {
		printf("��ĳɼ�ΪE"); 
	}
} 
