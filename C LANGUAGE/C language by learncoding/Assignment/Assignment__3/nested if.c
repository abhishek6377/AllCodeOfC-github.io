#include<stdio.h>
int main(){

int marks;
printf("Enter your marks\n");
scanf("%d",&marks);
if(marks>90 && marks<=100){
	printf("Excellent ");
}
 else if(marks>=80 && marks<=80){
	printf("Very good ");
}
else if(marks>=60 && marks<=79){
	printf("Good  ");
}
else if(marks<=40){
	printf("Fail");
}
else{
	printf("Plesea give marks below of 100");
}
return 0;
}
