#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter Total Number you want to copy :- \n");
	scanf("%d",&num);
	printf("Enter %d Values :- \n",num);
	int a[num],b[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Copied Value is:-\n");
	for(i=0;i<num;i++)
	{
		b[i]=a[i];
		printf("%d\n",b[i]);
	}
	return 0;
}
