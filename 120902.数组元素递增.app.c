#include<stdio.h>
#include<windows.h>
void main(){
int i=0;
int a,b;
int c[9][20]={
	{0,0,0,0},
	{0,0,0,0}
};
for(a=0;a<9;a++){
	for(b=0;b<20;b++){
		i++;
	c[a][b]=i;
	printf("%d ",c[a][b]);
	}
	printf("\n");
}
}
