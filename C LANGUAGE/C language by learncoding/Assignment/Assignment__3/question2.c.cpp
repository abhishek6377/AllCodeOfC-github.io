#include<stdio.h>
int main(){
	char id[90];
	float s,m1;
	int h,m;
	printf("Enter your id \n");
	scanf("%s",&id);
	printf("Enter your salary's\n");
	scanf("%f",&s);
	printf("Enter your Hour's\n");
	scanf("%d",&h);
	printf("Enter your Month's\n");
	scanf("%d",&m);
	m1=s*h*m;

	printf("Salary %.01f\n",m1);

	return 0;
}
