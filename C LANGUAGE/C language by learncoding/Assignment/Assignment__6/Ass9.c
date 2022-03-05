#include<stdio.h>
int main(){

	int n=0,r;
printf("Print this pattern 1,3,7,13,21.....\n");
	for(r=1;r<=11;r++){
		n=(r*r)-(r-1);

		printf("%d\n",n);
		
	}

	
	
	return 0;
}
