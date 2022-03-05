#include<stdio.h>
#include<conio.h>       // There is error ......
#include<stdlib.h>
int main()
{
float *ptr,i;
ptr=(float *)malloc(6 * sizeof(float));
for(i=0;i<6;i++){
printf("Enter  %f the number of float is : \n",i);
scanf("%f",&ptr[i]);

}
for(i=0;i<6;i++){
printf("The %f number is %f\n",i,ptr[i]);

}
getch();
clrscr();
return 0;
}
