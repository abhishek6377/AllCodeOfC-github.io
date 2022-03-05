#include<stdio.h>
int main(){
	float u,per;
	printf("Enter a unit\n");// Ass 4 Q.6
	scanf("%f",&u);
	if(u<=50){
		per=u*0.50;
		printf("price is %.2f",per);
	}
	 else if(u<=50){
		per=u*0.50;
		printf("price is %.2f",per);
	}
	else if(u>=50 && u<=100){
		per=u*0.75;
		printf("price is %.2f",per);
	}
	else if(u>=100 && u<=250){
		per=u*1.20;
		printf("price is %.2f",per);
	}
		else if(u>=250){
		per=u*1.50;
		printf("price is %.2f",per);
	}
	return 0;
}
