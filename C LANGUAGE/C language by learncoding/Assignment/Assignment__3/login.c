#include<stdio.h>
#include<string.h>
int main(){
//	char user[90];
	int pass;
	
	printf("Enter username and Password\n");
//	scanf("%s",&user);
	scanf("%d",&pass);
	
	if(pass=123){
		printf("Welcome your login\n");
	}
	else{
		printf("You not ente the correct password\n");
	}
	return 0;
}
