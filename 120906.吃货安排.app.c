#include<stdio.h>
#include<string.h>
void main(){
char i[15];
char a[]="春节";
char b[]="端午节";
char c[]="中秋节";
char d[]="元宵节";
scanf("%s",&i);
if(strcmp(a,i)==0){
    printf("爷要吃饺子");
}
else if(strcmp(b,i)==0){
    printf("爷要吃粽子");
}
else if(strcmp(c,i)==0){
    printf("爷要吃月饼");
}
else if(strcmp(d,i)==0){
    printf("爷要吃元宵");
}
else{
    printf("减肥");
}
}
