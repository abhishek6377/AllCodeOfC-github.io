#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[34];
char st1[34];
char c;
clrscr();
printf("please enter your first string\n");
scanf("%s",&st);
printf("The second character number\n");
for(int i=0;i<(c!='\n');i++){
fflush(stdin);
scanf("%c",&c);
st1[i]=c;
i++;
}
st1[i-1]='\0';
printf("The value of st is %s\n",st);
printf("The value of st1 is %s\n",st1);
printf("strcmp for these strings return %d\n",strcmp(st,st1));
getch();
}