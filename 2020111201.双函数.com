#include<stdio.h>
 void main(){
 	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
     int b;
 	scanf("%d",&b);
 	printf("%d",a[b-1]);

 }
