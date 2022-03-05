#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct complex{
int real;
int complex;
}comp;
void display(comp c){
printf("The value of real part is %d\n",c.real);
printf("The value of complex part is %d\n",c.complex);


}
void main(){
clrscr();
comp cnums[5];
for(int i=0;i<=5;i++){
printf("Enter the real number %d\n",i+1);
scanf("%d",&cnums[i].real);
printf("Enter the complex number %d\n",i+1);
scanf("%d",&cnums[i].complex);
}
for(i=0;i<=5;i++){
display(cnums[i]);
}
getch();
}
