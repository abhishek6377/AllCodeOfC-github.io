#include<stdio.h>
int main(){
	int a,b,d;
	char c;
	    printf("Enter first number\n");
	    scanf("%d",&a);
		printf("Enter Operator\n");
	    scanf("%c",&c);
		printf("Enter Second number\n");
	    scanf("%d",&b);
	     switch(c){
	     	    case '+':
	     		d=a+b;
	     		printf("Addition %d\n:",d);
	     		break;
	     		case '-':
	     		d=a-b;
	     		printf("Substration %d\n:",d);
	     		break;
	     			case '*':
	     		d=a*b;
	     		printf("Multiply %d\n:",d);
	     		break;
	     			case '/':
	     		d=a+b;
	     		printf("Divide %d\n:",d);
	     		break;
	     		default:
	     			printf("Invalid operator");
		 }
	
	return 0;
}
