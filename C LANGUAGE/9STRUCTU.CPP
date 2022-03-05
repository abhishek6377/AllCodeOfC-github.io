#include<stdio.h>
#include<conio.h>
#include<conio.h>
struct vector{
int x;
int y;
};
struct vector sumVector(struct vector v1,struct vector v2){
struct  vector result;
result.x=v1.x +v2.x;
result.y=v1.y +v2.y;
 return result;
 }
void main(){
struct vector v1,v2,sum;
v1.x=34;
v1.y=78;
clrscr();
printf("The vector 1: %d and vector 2: %d\n",v1.x,v1.y);
v2.x=30;
v2.y=90;
printf("The vector 3: %d and vector 4: %d\n",v2.x,v2.y);
sum=sumVector(v1,v2);
printf("X dim of result is %d and Y dim is %d\n",sum);

getch();
}