#include<stdio.h>
int main(){
	int a,b;// Ass 4 Q.1
    	printf("Enter first number \n");
     	scanf("%d",&a);
		printf("Enter Second number \n");
       	scanf("%d",&b);
	if(a<b){
		printf("B is greater then A");
		
	}
	else if(b<a){
			printf("A is greater then B");
	}
	else{
		printf("Both are equal");
	}
}
