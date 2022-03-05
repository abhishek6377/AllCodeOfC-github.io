#include<stdio.h>
int main(){
	printf("dynamic memory allocation is way in which the size of data structure can be changed during runtime \n");
	printf("four types of dynamic memory \n");
	printf("1.code\n 2.static and global \n 3.stack\n 4.heap\n");
	printf("Function of dynamic memory\n 1.malloc \n 2. calloc \n 3. realloc \n 4.free \n");
	printf("In malloc we not change the value at run time if we change it give garbage in example i am proved this i am give array size 3 and and i run 4 time but time value is correct but 4 time value is garbage that proved in malloc we are not change the value because memory are save in heap\n");
//	int *ptr,i;
//	ptr=(int*)malloc(3*sizeof (int));
//	// use of malloc 
////	printf(" malloc = %d\n",ptr);/
////	for(i=0;i<3;i++){
//		for(i=0;i<3;i++){// it give garbage 4 time because array size is 3 it run only 3 time perfectly 
//		printf("Enter value %d time\n ",i);
//		scanf("%d",&ptr[i]);
//	}
////		for(i=0;i<3;i++){
//			for(i=0;i<4;i++){
//		printf("The  value %d is %d \n",i,ptr[i]);
//	
//	}
	
//	 ********************************************************************
// use of calloc 
//	int *ptr,i;
//	ptr=(int*)calloc(3,sizeof (int));
////	printf(" malloc = %d\n",ptr);
////	for(i=0;i<3;i++){
//		for(i=0;i<3;i++){// it give garbage 4 time because array size is 3 it run only 3 time perfectly 
//		printf("Enter value %d time\n ",i);
//		scanf("%d",&ptr[i]);
//	}
////		for(i=0;i<3;i++){
//			for(i=0;i<4;i++){
//		printf("The  value %d is %d \n",i,ptr[i]);
//	
//	}
//	
	
//	use of realloc
	int *ptr,i;
	ptr=(int*)realloc(ptr,3*sizeof (int));
//	printf(" malloc = %d\n",ptr);
//	for(i=0;i<3;i++){
		for(i=0;i<3;i++){// it give garbage 4 time because array size is 3 it run only 3 time perfectly 
		printf("Enter value %d time\n ",i);
		scanf("%d",&ptr[i]);
	}
		for(i=0;i<3;i++){
//			for(i=0;i<4;i++){
		printf("The  value %d is %d \n",i,ptr[i]);
		free(ptr);
	
	}
	return 0;
}
