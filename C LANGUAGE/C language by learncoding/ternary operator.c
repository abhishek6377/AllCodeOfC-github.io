#include<stdio.h>
int main(){
	int a=90000,b=100,c=900;
//	int c=(a>b)?a:b;// this is use for two operand 
//	int max=(a>b)?(a>c?a:c):(b>c?b:c);// this is use for three operand 
//	printf("%d",max);
	
//	if we not use the conditional operator 
// int marks=90;
// char results;
//  if(marks>33){
//  	results='p';
//  	printf("%c",results);
//  }
//  else{
//  	results='f';
//  		printf("%c",results);
//  }
// results=(marks>33)? 'p':'f';
//results=(marks>33)?('p':'f'):(marks>90?'E':'V');
// 	printf("%c",results);
// 
int var =75;
int var2=56;
int num;
num=sizeof(var)?(var2>23?((var==75)?'A':0):0):0;
printf("%d",num);
	return 0;
}
