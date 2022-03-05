//#include<stdio.h>
//void sum(int x,int y);
//int main(){          //this is first way to use the function by void
//	 int a,b;
//	 printf("enter number 's\n");
//	 scanf(" %d %d",&a ,&b);
////	 printf("%d",a+b);
//	 sum(a,b);
//	
//	return 0;
//
//}
//void sum(int x, int y){
////	int x, y;
//	printf("Sum %d",x+y);
//}
//***********************************************************************
// second way to use the function
#include<stdio.h>
int sum(){
	 int a,b;
	 printf("enter number 's\n");
	 scanf(" %d %d",&a ,&b);
	 return a+b;
}
int main(){
	int a,b;
int c=	sum(a,b);
printf("Sum %d",c);
	return 0;
}
