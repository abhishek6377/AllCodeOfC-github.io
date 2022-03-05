#include<stdio.h>
int main(){
	//sum of two array 
	int arr[2][3];
	int i,j,sum;
	printf("Enter the  element :\n");
	
	for(i=0;i<2;i++){
	  for(j=0;j<3;j++){
		scanf("%d",&arr[i][j]);
	}
	}
	for(i=0;i<2;i++){
	  for(j=0;j<3;j++){
	  	printf(" %d ",arr[i][j]);
	     
	      sum=sum+arr[i][j];
	      
	}
	printf("\n");
	}
	 printf(" Sum : %d ",sum);
	
	
	return 0;
}
