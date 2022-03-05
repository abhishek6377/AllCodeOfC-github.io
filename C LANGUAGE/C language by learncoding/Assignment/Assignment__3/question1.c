#include<stdio.h>
     float main(){
	 float w1,w2,p1,p2;
//	printf("Enter weight\n");
//	scanf("%f %f",&w1,&w2); 
//	printf("Your weight %.02f ,%.02f\n",w1,w2);
	printf("Enter purchase item\n");
	scanf("%f %f",&p1,&p2);
	printf("Your weight %.02f, %.02f\n",p1,p2);
	float we1=w1*p1;
	float we2=w2*p2;
	float s1=(we1+we2)/2;
	printf("%.02f",s1);
	return 0;
	
}
