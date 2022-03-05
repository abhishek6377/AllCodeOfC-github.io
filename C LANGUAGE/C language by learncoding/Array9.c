#include<stdio.h>
int main(){
	// add row and column using array 
	int arr[3][3];
	int i,j;
	int row ,column;
	printf("Enter the element of array :\n");
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	scanf(" %d ",&arr[i][j]);
	}
	}
	printf("\n");
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf(" %d ",arr[i][j]);
	}
	printf("\n");
	}
	printf("*************************************\n");
	for(i=0;i<2;i++){
		row=column=0;
	for(j=0;j<2;j++){
//	printf(" %d ",arr[i][j]);
	row=row+arr[i][j];
	column=column+arr[j][i];
	}
	printf("\n");
	printf("Row %d ",row);
	printf("Column %d ",column);
	}

}
