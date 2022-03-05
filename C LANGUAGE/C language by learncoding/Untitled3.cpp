#include<stdio.h>
#include<string.h>
int main(){
char str[100],ch[100];
//puts("Enter a string");
//gets(str);
//strcpy(ch,str);
//puts("This second string ");
//puts(ch);
// this is used to equal two string
//puts("Enter first string");
//gets(str);
//puts("Enter Second string");
//gets(ch);
//if(strcmp(str,ch)==0){
//	puts("Both string are equal");
//}
//else{
//	puts("Not Equal");
//}

//this is used add two string
puts("Enter first string");
gets(str);
puts("Enter Second string");
gets(ch);
strcat(str,ch);
puts(str);
 	return 0;
}
