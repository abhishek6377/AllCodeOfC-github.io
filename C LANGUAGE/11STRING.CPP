#include<stdio.h>
#include<conio.h>
void encrypt(char *c){
char *ptr=c;
while(*ptr!='\0'){
*ptr=*ptr+1;
ptr++;
}
}
void main()
{
clrscr();
char c[]="I am abhishek gupta";
encrypt(c);
printf("Encrypted string is: %s",c);
getch();
}