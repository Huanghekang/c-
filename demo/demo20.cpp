/*调用多个函数*/
#include<stdio.h>
void jolly(void);
void deny(void);
int main(){
	jolly();
	deny();
	return 0;
} 
 void jolly (void){
 	printf("你是谁？\n"); 
 }
 void deny (void){
 	printf("我是Jane。\n"); 
 }
