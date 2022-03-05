#include<stdio.h>
//convert into tranpose matrix or nothing 
int main(){
	int b;
	int arr[2][3];
	int i,j;
	printf("Enter the elment array \n");
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		scanf(" %d ",&arr[i][j]);
	}
	}
	printf("Simple matrix\n");
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		printf(" %d ",arr[i][j]);
	}
	printf("\n");
	}
		printf("Simple matrix convert into the transpose:\n");
	for(i=0;i<3;i++){
	for(j=0;j<2;j++){
//		printf(" %d ",arr[j][i]);
b=arr[j][i];
printf(" %d ",b);
	}
	printf("\n");
	}


	
	
	return 0;
}
