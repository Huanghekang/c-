/*把一堆苹果分给n个小朋友，要让每个小朋友都能分到苹果，
并且每个人分的苹果个数不一样，问最少需要多少个苹果*/
#include<stdio.h>
int main(){
	int kids;
	printf("请问有多少个小朋友分苹果？\n");
	scanf("%d",&kids);
	int apples=((kids+1)*kids)/2;
	printf("最少需要%d个苹果。\n",apples); 
	 
	
} 
 
