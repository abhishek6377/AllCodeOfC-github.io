#include<stdio.h>
int main(){
	int arr[2][2],arr1[2][2],arr2[2][2];
     int i,j,sum=0;
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
     	 	printf(" %d ",arr1[i][j]);
     	 }
	 printf("\n");
	 }
	 printf("Sum of two matrix:\n");
	 	for(i=0;i<2;i++){
     	 for(j=0;j<2;j++){
//     	 	printf(" %d ",arr1[i][j]);
     	 arr2[i][j] =arr[i][j]+arr1[i][j];
     	  printf(" %d ",arr2[i][j]);
     	  sum=sum+arr2[i][j];
     	
	 }
	 printf("\n");
	 }
	  	 printf("Sum of two Matrix :%d\n",sum);
	 
}
