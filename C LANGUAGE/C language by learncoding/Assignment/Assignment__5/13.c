#include<stdio.h>
int main(){
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	if(n>0 && n<=9){
		printf("This is single digit\n");
	}
	else if(n>10 && n<=99){
		printf("This is two digit\n");
	}
	else if(n>100 && n<=999){
		printf("This is three digits\n");
	}
}
