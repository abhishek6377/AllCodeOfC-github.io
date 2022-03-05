
//using data types and how to find size of data types
//data types specifies which types value store in varaible that is called data types
#include<stdio.h>
#include<string.h>
int main(){
	int a=90;
	float b=90.08;
	char c='A';
	char d[]="Abhishek";
	printf("Hello world\n");
	printf("The value of a is %d\n",a);
	printf("The size of a is %d\n",sizeof(a));
//	printf("How to use data types");
//	printf("We are %d and %i for integer both same work");
	printf("For integer %i\n ",a);
	printf("For float %f\n",b);
	printf("for char %c\n",c);
	printf("for string %c\n",d);
	
	
	return 0;
}
