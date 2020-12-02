#include<stdio.h>
void main(){
int a,b,c,d,e;
printf("爱用不用\n");
scanf("%d",&a);
if(a>=86400){
printf("出错");
}
else{b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
printf("%02d时",b);
printf("%02d分",c);
printf("%02d秒",d);
}
}
