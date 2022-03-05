#include<stdio.h>
int main(){
	char v;// Ass 4 Q.4
	printf("Enter a character\n");
	scanf("%c",&v);
	if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'){
		printf("%c vowel is vowel\n",v);
	}
	else{
		printf("%c is not vowel\n",v);
	}
	
}
