#include<stdio.h>
int main(){
	int i=1 ,num,sum=0;
	printf("Enter number\n");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==num)
		printf("This is perfect number ");
	
	else
		printf("This is non perfect number");
	
	return 0;
}
