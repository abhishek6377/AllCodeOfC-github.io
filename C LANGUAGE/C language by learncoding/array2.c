#include<stdio.h>
int main(){
	// In this case we add array element ane calculate avg 
	int mark[5],i=0;
	int sum=0;
	float avg;
	printf("Enter array element:\n");
	for(i=0;i<2;i++){
		scanf("%d",&mark[i]);
	}
	  for(i=0;i<2;i++)
	{
		sum=sum+mark[i];
//		printf("The %d index of element is %d\n",i,mark[i]);
       
	}
	avg=(float)sum/2;
	printf("Sum of array is %d\n",sum);
	printf("Avg of array is %0.2f\n",avg);

	return 0;
}
