#include<stdio.h>
int main(){
	float l1,l2;
	printf("Enter lenght of equilateral triangle\n");
	scanf("%f %f",&l1,&l2);
	float a=(0.433*(l1*l2));
	printf("The area of equilateral triangle %.02f",a);
	return 0;
//	0.433
}
