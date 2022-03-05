#include<stdio.h>
int main(){
	int arr[2][3];
//	int arr[2][3];//={1,2,3,4,5,6,};//complile time 
// in this case array we initialise the all value it take zero not garbage
//	int arr[][3]={1,2,3,4};//complile time 
//	int arr[][3]={0,12,3,4};// in this case only one column 
//     int arr[][3]={1,1,1}; 
//		int arr[][]={1,2,3,4,5,6,};// this is give error 
// this second way to declare the array
//int arr[2][3]={
//				{0,0,0,3},// that case all are zero only using this line not all 
//				{1,1,1}
//			  };
	int i,j;
	printf("Enter the element of array:\n");
	for(i=0;i<2;i++)
   {
	 for(j=0;j<3;j++)
  {
	    	scanf("%d",&arr[i][j]);// this runtime 
	}
		
	}
		for(i=0;i<2;i++){
			for(j=0;j<3;j++){
	    	printf(" 0%d ",arr[i][j]);
	}
	        printf("\n");
		
	}

	return 0;
}
