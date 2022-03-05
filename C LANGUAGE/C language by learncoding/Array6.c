#include<stdio.h>
int main(){
	// sum of 2d array of two arrays 
	int arr[2][3],arr1[2][3],arr2[2][3];
	int i,j;
	printf("Enter first array element :\n");
	
	  for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
		scanf("%d",&arr[i][j]);
	}
	}
	printf("Enter Second array element :\n");
	
	 for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		scanf("%d",&arr1[i][j]);
	}
	}
	printf("Result of First Array :\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf(" %d ",arr[i][j]);
//				printf(" %d ",arr1[i][j]);
//		arr2[i][j]=arr1[i][j]+arr[i][j];
//		printf(" %d ",arr2[i][j]);
	}
	printf("\n");
	}
		printf("Result of Second Array :\n");
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
				printf(" %d ",arr1[i][j]);
//		arr2[i][j]=arr1[i][j]+arr[i][j];
//		printf(" %d ",arr2[i][j]);
	}
	printf("\n");
	}
	
	printf("Sum of two Array :\n");
		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
				
		arr2[i][j]=arr1[i][j]+arr[i][j];
		printf(" %d ",arr2[i][j]);
	}
	printf("\n");
	}
	
	
	return 0;
}
