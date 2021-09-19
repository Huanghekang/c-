#include <stdio.h>
int main() {
	int score=0;
	printf("请输入你的成绩。");
	scanf("%d",&score);
	if(score>=90) {
		printf("你的成绩为A"); 
	} 
	else if(score<90&&score>=80){
		printf("你的成绩为B"); 
	}
	else if(score<80&&score>=70){
		printf("你的成绩为C"); 
	}
	else if(score<70&&score>=60){
		printf("你的成绩为D"); 
	}
	else {
		printf("你的成绩为E"); 
	}
} 
