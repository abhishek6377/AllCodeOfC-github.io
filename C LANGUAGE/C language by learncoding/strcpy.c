#include<stdio.h>
//palindrome means if we inverse number and word is same that is called palidrome
int main(){
   char str[100];
   puts("Enter a palindrome string ");
   guts(str);
//      char str1=strrev(str);
      if(str==strrev(str)){
      	puts("This is a palindrome string ");
	  }
	  else{
	  	puts("This is not palindrom");
	  }
	return 0;
}
