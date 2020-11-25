#include<stdio.h>
void main(){
	int a=5;
	int b;
	printf("友情提示：答案是4\n");
	while(1){
	scanf("%d",&b);
	if(b==5){
	printf("运气不错\n");
	}
	else if(b<5){
	printf("憨der\n");
	}
	else{
	printf("傻der\n");
	}
	}
}
