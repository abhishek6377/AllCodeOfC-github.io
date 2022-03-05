#include<stdio.h>
int main(){
	int arr[3][3] ,arr1[3][2],arr2[3][3];
	int i,j,k,sum;
	
	printf("Enter first array element:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter Second array element:\n");
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	
		printf(" First matrix:\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
		printf("Second matrix:\n");
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf(" %d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("********************\t\t**************************\t\n");
	printf("Multiplication of two matrix:\n");
	
		for(i=0;i<3;i++){
		  for(j=0;j<2;j++){
			sum=0;
		    for(k=0;k<3;k++){
		   sum=sum+arr[i][k]*arr1[k][j];
		}
		arr2[i][j]=sum;
		
	}
//		printf("\n");
	}
	
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf(" %d ",arr2[i][j]);
	}
	
	printf("\n");
	}
	return 0;
}
