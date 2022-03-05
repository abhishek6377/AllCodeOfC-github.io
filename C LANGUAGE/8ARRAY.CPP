#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int a[2][3][4];
clrscr();
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
for(int k=0;k<4;k++){
printf("the value arr[%d][%d][%d] and %u\n",i,j,k,&a[i][j][k]);
}
}
}
getch();
}
