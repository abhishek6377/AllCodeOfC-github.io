#include<stdio.h>
int main(){
	int a,b,c;
	char operation;
	printf("Enter First number\n");
	scanf("%d",&a);
	printf("Enter operation\n");
	scanf("%c",&operation);
	printf("Enter Second number\n");
	scanf("%d",&b);
	switch(operation){
		case 1:
			c=a+b;
			printf("%d",c);
			break;
				case 2:
			c=a-b;
			printf("%d",c);
			break;
			
				case 3:
			c=a*b;
			printf("%d",c);
			break;
				case 4:
			c=a/b;
			printf("%d",c);
			break;
				case 5:
			c=a%b;
			printf("%d",c);
			break;
			default:
				printf("Invalid operations\n");
	}
	return 0;
}
