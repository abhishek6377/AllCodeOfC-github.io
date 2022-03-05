#include<stdio.h>
int main(){
	int i,arr[100];
	int counteven=0,countodd=0;
	printf("Enter number \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
		
			counteven++;
		}
		else{
			countodd++;
		}
	}

	printf("Even : %d and odd number is %d\n",counteven,countodd);
	
	return 0;
}
