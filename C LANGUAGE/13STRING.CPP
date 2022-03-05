#include<stdio.h>
#include<conio.h>
int occurence(char st[],char c){
char *ptr=st;
int count=0;
while(*ptr!='\o'){
if(*ptr==c){
count++;
}
ptr++;
}
return count;
}
void main()
{
char st[]="Suraj"

int count=occurence(st[],'S');
printf("Occurence=%d",count);
getch();
}