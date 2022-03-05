#include<stdio.h>
int main(){
//	char arr[]={1,2,3,4,5,'a',"kjnd"};// this print a aski wali 97 and capital letter  A is 65
//	int i=0;
//	while(i<7){
//		printf(" %c\n ",arr[i]);
//		i++;
//	}
char ch[]={1};
int i,j;
for(i=0;i<5;i++){
	for(j=0;j<i;j++){
		printf("%c",ch[0]);
	}
	printf("\n");
}
	return 0;
}
