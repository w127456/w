#include<stdio.h>
#include<windows.h>
void main(){
int a,b;
int c[20][10]={
	{1,1,1,1},
	{1,1,1,1}
};
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	c[a][b]=999;
	printf("%d ",c[a][b]);
	}
	printf("\n");
}
Sleep(0000);
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	c[a][b]=0;
	printf("%d ",c[a][b]);
	}
	printf("\n");
}
Sleep(5000);
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	c[a][b]=999;
	printf("%d ",c[a][b]);
	}
	printf("\n");
}
}
