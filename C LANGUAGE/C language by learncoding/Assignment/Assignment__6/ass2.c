#include<stdio.h>
int main(){
      int n ,i,j=0;
      printf("Enter number \n");
      scanf("%d",&n);
      while(n>0){
      	i=n%10;
      	j=j+i;
      	n=n/10;
      	
	  }

      printf(" sum of digits  %d",j);
      
      
	return 0;
}
