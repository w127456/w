#include<stdio.h>
#include<windows.h>
void main(){
	int a=1;
	printf("秒表计数器\n");
	do{
	printf("现在是第%d秒\n",a);
	a++;
	Sleep(1000);
	}
	while(a<=10000000000);{
	printf("起床");
	}
}
