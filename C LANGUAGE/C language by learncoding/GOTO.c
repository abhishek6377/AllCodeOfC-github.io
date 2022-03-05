#include<stdio.h>
int main(){
	int i;
	label:
		printf(" %d ",i);
		++i;
		if(i<=100)
		goto label;
		return 0;
}
