#include<stdio.h>
int main(){
float  r,r1,r2;
int m,mi,h,s,k,l;
printf("Enter Milliseconds\n");
scanf("%d",&m);
r=(m%3600000);
k=r;
h=m/3600000;
printf("Hours %d\n",h);
r1=(k%60000);
mi=r/60000;
printf("Minutes %d\n",mi);
l=r1;
r2=(l%1000);
s=r1/1000;
printf("Seconds is %d\n",s);
printf("Milliseconds is %.01f",r2);
}
