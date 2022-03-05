#include<stdio.h>
int main(){
	//Multiplication of two matrix
	int arr[2][2],arr1[2][2],arr2[2][2];
     int i,j,k,sum=0;
      printf("Enter First array element :\n");
     for(i=0;i<2;i++){
     	 for(j=0;j<2;j++){
     	scanf("%d",&arr[i][j]);
	 }
	 }
    printf("Enter second array element :\n");
	  for(i=0;i<2;i++){
     	 for(j=0;j<2;j++){
     	scanf("%d",&arr1[i][j]);
	 }
	 }
	 
	 	printf("First Matrix :\n");
	  for(i=0;i<2;i++){
     	 for(j=0;j<2;j++){
     	 	printf(" %d ",arr[i][j]);
     	  
	 }
	 printf("\n");
	 }
	  printf("Second Matrix :\n");
	     for(i=0;i<2;i++){
     	 for(j=0;j<2;j++){
     	 	printf(" %d ",arr[i][j]);
     	  
	 }
	 printf("\n");
	
	 }
	  printf("Multiplication of two matrix\n");
	    for(i=0;i<2;i++){
     	 for(j=0;j<2;j++){
     	 	sum=0;
     	 	 for(k=0;k<2;k++){
     	 	
     	sum =sum+arr[i][k]*arr1[k][j];
     }
     	arr2[i][j]=sum;
     	printf(" %d ",sum);
     	  
//	 }
//	 
}
 printf("\n");
	
	 }
	 return 0;
}
	 
	 
