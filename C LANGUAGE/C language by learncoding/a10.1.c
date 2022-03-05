#include<stdio.h>
int main(){
	int arr[10],i;
	printf("Enter ten number:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]>arr[0]){
			arr[0]=arr[i];
			
		}
		
			
	}
	printf("The  largest number is :%d",arr[0]);

	
	return 0;
}
