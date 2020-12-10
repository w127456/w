#include<stdio.h>
#include<string.h>
void main(){
char i[]="老王";
char x[30];
int a=5;
int b;
printf("爱猜不猜\n");
while(1){
	scanf("%s",&x);
	if(strcmp(i,x)==0){
        printf("开始");
		scanf("%d",&b);
		if(b==5){
		printf("对头\n");
		}
    else if(b>5){
		printf("憨der\n");
		}
		else{
		printf("傻der");
		}
}
	else{
	printf("就这？别玩了");
	}
}
}
