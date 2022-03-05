#include<stdio.h>
int main(){
	int a,b,d;
	char operator;
	    printf("Enter first number\n");// error
	    scanf("%d",&a);
	    printf("Enter a operator\n");
	    scanf("%c",&operator);
		
		printf("Enter Second number\n");
	    scanf("%d",&b);
	     switch(operator){
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
	     		d=a/b;
	     		printf("Divide %d\n:",d);
	     		break;
	     		default:
	     			printf("Invalid operator");
		 }
	
	return 0;
}
