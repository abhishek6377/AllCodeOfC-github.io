#include<stdio.h>
int main()
{
	// This way is file created
	int *f;
	f=fopen("C:\\Users\\Abhishek\\Desktop\\file1.txt","w");
	printf("Successfully file is created");
	fclose(f);
	return 0;
}


// file write 
//#include<stdio.h>
//int main()
//{
//   char str[100];
//	FILE *f;
//	f=fopen("C:\\Users\\Abhishek\\Desktop\\file.txt","w");
//	if(f==NULL){
//		printf("error");
//		exit(1);
//	}
//	printf("enter your throught\n");
//	gets(str);
//	fprintf(f,"%s",str);
//	printf("Successfully file is created");	
//	fclose(f);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//   char str[100];
//	FILE *f;
//	if((f=fopen("C:\\Users\\Abhishek\\Desktop\\file.txt","r"))==NULL)
//	{
//		printf("No text  \n");
//	}
//	fscanf(f,"%s",str);
//	int i;
//    puts(str);
//	fclose(f);
//	return 0;
//}





