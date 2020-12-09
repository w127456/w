#include<stdio.h>
#include<windows.h>
void main(){
int i=91;
int a,b;
int c[9][10]={
	{0,0,0,0},
	{0,0,0,0}
};
for(a=0;a<9;a++){
	for(b=0;b<10;b++){
		i--;
	c[a][b]=i;
	printf("%d ",c[a][b]);
	}
	printf("\n");
}
}
