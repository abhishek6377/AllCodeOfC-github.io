//three types of variable 
//1.local variable means use in parmeter and function
//2.static variable means use with static keyword static means value not change.
//3.global variable means we can decalere anywhere in program 

#include<stdio.h>
int a=90;// this gloabal variable
int main(){
int b=100;///this is local variable
static int c=90; //  this is static variable
printf("This is  gloable varibale %d\n",a);
printf("This is  local varibale %d\n",b);
printf("This is  static varibale %d\n",c);
	return 0;
}
