#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("enter the number:\n");
scanf("%d",&a);
if(a%2==0){
printf("The %d number is even:\n",a);
}
else{
printf("The %d number is odd:\n",a);
}
getch();

}