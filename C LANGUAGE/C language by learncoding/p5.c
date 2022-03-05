#include<stdio.h>
    int main(){
	int arr[3][3];
	int i,j;
	int count;
	printf("enter number\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
					count+=arr[i][j];
		}
			}
	printf("sum of %d",count);
	return 0;
}
