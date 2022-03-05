#include<stdio.h>
#include<conio.h>
void printpattern(int n);
void main()
{
int n=5;
clrscr();
printpattern(n);
getch();
}
void printpattern(int n){
if(n==1){
printf("*");
return;
}
printpattern(n-1);
for(int i=0;i<(2*n-1);i++){
printf("*");

}
printf("\n");
}