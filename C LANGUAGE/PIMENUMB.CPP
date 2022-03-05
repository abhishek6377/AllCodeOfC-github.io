#include<stdio.h>
#include<conio.h>
void main(){
int n,i,prime=1;
clrscr();
printf("Enter the Number:\n");
scanf("%d",&n);
for(i=2;i<n;i++){
if(n%i==0){
prime=0;
break;
}
}
if(prime==0){
printf("This is not a prime number:\n");
}
else{
printf("This is a prime number:\n");
}
getch();

}

