#include<stdio.h>
int main(){
	char str[100];
	printf("Enter a  string ");
	scanf("%s",&str);
		printf("String converted into uppercase");
	puts(strupr(str));

	return 0;
}
