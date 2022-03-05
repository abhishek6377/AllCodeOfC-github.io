#include<stdio.h>
int main(){
//	int a[0]={1,2};
      int b;
//   int a[b=11/2];//={1,2};
//int a[-2];// we dont use  this array 
int a[10]={1,2};
	
//	printf("%d",a[19]);
    int arr[5];
    int i;
    printf("Enter the array of element");
    for(i=0;i<5;i++){
    	scanf("%d",&arr[i]);
	}
	   for(i=4;i>=0;i--)
	     {
//	   	if(i<2){
//	   		a[i]=1;
	   		printf("%d ",arr[i]);
//		   }
//		   else{
////		   	a[i]=0;
//		   		printf("%d ",arr[i]);
//		   }
        
	}
	return 0;
}

