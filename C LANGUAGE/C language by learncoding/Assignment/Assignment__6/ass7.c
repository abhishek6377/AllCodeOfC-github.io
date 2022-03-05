#include<stdio.h>
int main(){
//	these are are armstrong 153, 370, 371 and 407
					//153 = (1*1*1)+(5*5*5)+(3*3*3)  
					//where:  
					//(1*1*1)=1  
					//(5*5*5)=125  
					//(3*3*3)=27  
					//So:  
					//1+125+27=153  
	int n,temp ,sum,r;
	printf("Enter number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum =sum+(r*r*r);
		n=n/10;
	}
	

		if(temp==sum){
			printf("This is armstrong number");
		}
		else{
			printf("This is not  armstrong number");
		}
	
	return 0;
}
