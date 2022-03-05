#include<stdio.h>
#include<conio.h>
int fact(int x);
int main()
{    //It work only 8
int n;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
printf("The value of factorial %d is %d",n,fact(n));
getch();

}
int fact(int x){
printf("calling factorial (%d)\n",x);
if (x==1 || x==0){
return 1;
}
else {
return x *fact(x-1);
}


}