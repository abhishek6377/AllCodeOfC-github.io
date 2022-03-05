#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter a  string \n");
	scanf("%s",&str);
		printf("String converted into reverse\t:");
	puts(strrev(str));

	return 0;
}
