#include<stdio.h>
#include<conio.h>
void decrypt(char *c){
char *ptr=c;
while(*ptr!='\0'){
*ptr=*ptr-1;
ptr++;
}
}
void main()
{
clrscr();
char c[]=" abvhjsk sk gmhvk ";
decrypt(c);
printf("Decrypted string is: %s",c);
getch();
}