#include<stdio.h>
int main(){
	int arr[100];
	int i,s;
	printf("Enter number \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<arr[0]){
			arr[0]=arr[i];
		}
	}
	printf("The smallest value is %d",arr[0]);
	return 0;
}
