#include<stdio.h>
void main(){
int b,c;
int a[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
};
for(b=0;b<3;b++){
	for(c=0;c<3;c++){
	printf("%d ",a[b][c]);
	}
	printf("\n");
}
}
