#include<stdio.h>
int main(){
	int i,r;
	printf("print even number \n");
	for(i=1;i<20;i++){
		r=(((i*i)+1)-1);
		printf(" %d ",r);
	}
	return 0;
}
