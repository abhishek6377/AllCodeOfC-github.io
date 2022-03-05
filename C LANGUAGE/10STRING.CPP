#include<stdio.h>
#include<conio.h>
void slice(char *st,int m,int n){

int i=0;
clrscr();
while((m+i)<n){
st[i]=st[i+m];
i++;
}
st[i]='\0';
}
void main()
{
char st[]="abhishek";
slice(st,1,5);
printf("%s",st);
getch();
}