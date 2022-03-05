#include<stdio.h>
int main(){
	int s;
	float da,hr;// Ass 4 Q.5
	printf("Enter your salary\n");
		scanf("%d",&s);
		if(s<=2000){
			da=s*10/100;
			hr=s*20/100;
			printf("Your DA is %.02f\n",da);
			printf("Your DA is %.02f\n",hr);
		}
		else if(s>2000 && s<=5000){
			da=s*20/100;
			hr=s*30/100;
			printf("Your DA is %.02f\n",da);
			printf("Your DA is %.02f\n",hr);
		}
				else if(s>5000 && s<=10000){
			da=s*30/100;
			hr=s*40/100;
			printf("Your DA is %.02f\n",da);
			printf("Your DA is %.02f\n",hr);
		}
			else if(s>10000){
			da=s*50/100;
			hr=s*50/100;
			printf("Your DA is %.02f\n",da);
			printf("Your DA is %.02f\n",hr);
	}
	
	return 0;
}
