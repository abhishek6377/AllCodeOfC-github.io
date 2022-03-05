#include<stdio.h>
int main(){
	int p,a,q,temp;
	printf("Enter number\n");
	scanf("%d",&p);
	temp=p;
	while(p>0){
		a=p%10;
		q=(q*10)+a;
		p=p/10;
			
	}
	if(temp==q){
		printf("Palindrome number");
	}
	else{
		printf("Not Palindrome number");
	}
	
   return 0;
}
