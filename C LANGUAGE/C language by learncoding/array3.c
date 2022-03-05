#include<stdio.h>
// find even and odd number in array element
int main(){
	int arr[10];
	int i,even=0,odd=0;
	printf("Enter 10 element of array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	
	}
	for(i=0;i<5;i++){// this part also use in first loop 
        if(arr[i]%2==0){
        	even=even+1;
        	printf("Even: %d \n",arr[i]);
//        	printf("\n");
		}
//		printf("\n");
		
		else{
			   odd=odd+1;
				printf("Odd %d ",arr[i]);
//				printf("\n");
		}
	}
	printf("In this array %d even only\n",even);
	printf("In this array %d odd only\n",odd);
	
	return 0;
}
