#include<stdio.h>
int main(){
	double i,j;
	double fact=1;
	printf("Enter your number:");
	scanf("%lf",&j);
	for(i=1;i<=j;i++){
		
		fact=fact*i;
	}
		printf(" Factorial of %0.0lf is %0.2lf",j,fact);
	
	return 0;
}
