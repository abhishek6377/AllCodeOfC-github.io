#include<stdio.h>
int main(){
	int w;
	printf("1.Monday");
		printf("2.Tuesday");
			printf("3.Wednesday");
				printf("4.Thursday");
				printf("5.Friday");
					printf("6.Saturday");
						printf("7.Sunday");
	printf("Enter choice\n");
	scanf("%d",&w);
	switch(w){
		    case 1:
			printf("Monday");
			break;
			case 2:
			printf("Tuesday");
			break;
			case 3:
			printf("Wednesday");
			break;
			case 4:
			printf("Thursday");
			break;
			case 5:
			printf("Friday");
			break;
			case 6:
			printf("Saturday");
			break;
			case 7:
			printf("Sunday");
			break;
			default:
				printf("Invalid number.");
	}
	return 0;
}
