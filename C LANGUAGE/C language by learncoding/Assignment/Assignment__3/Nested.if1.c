#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a first number\n");
	scanf("%d",&a);
	printf("Enter a Second number\n");
	scanf("%d",&b);
	printf("Enter a third number\n");
	scanf("%d",&c);
	if(a>b && b<c){
		if(a>b){
			printf("A is greater  than B\n");
			
		}
		else{
			
			printf("B is greater than A");
		}
	}
	else{
			if(b<c && a>c){
				printf("B is greater than C");
			
		}
		else{
			printf("C is greater B");
			
		}
		
	}
	return 0;
}
