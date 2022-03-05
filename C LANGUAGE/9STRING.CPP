#include<stdio.h>
#include<conio.h>
int strelen(char *st){
char *ptr =st;
int len=0;
while(*ptr!='\0'){
len++;
ptr++;
return len;
}
}
void main() {
char  st[]="suraj";
int l=strlen(st);
printf("The length of this strings is %%d",l);
retirn 0;
}