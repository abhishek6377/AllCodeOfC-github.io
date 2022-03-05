#include<stdio.h>
#include<string.h>
int main(){
//	this is way to use string in c
//	char str[70]="Abhishek";
//	printf("%s",str);
// by string method to give input and output 
char name[90];

puts("Enter your name ");
gets(name);
puts(name);  
printf("using string method ");
puts(" Puts Only display string not integer  if you use the string length method");
 puts("it show error because strlen show integer and puts not support so we use printf" ); 
 puts(" ");
 
  puts(" this lowecase  string ");
  puts(strlwr(name));
   puts(" this uppercase  string ");
   puts(strupr(name));
    puts(" this length of  string ");
    printf("%d\n",strlen(name));
    puts(" this inverse the string ");
 puts(strrev(name));
 
	return 0;
}

