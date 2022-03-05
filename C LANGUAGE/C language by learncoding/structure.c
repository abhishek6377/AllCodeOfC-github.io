#include<stdio.h>
struct employee{
	int eid;
	char str[100];
	float sal;
}emp;
int main(){
////	 struct employee emp;// by we not declared the structure we use this shortcut method declare there
//	printf("enter your eid and name and salary\n");
// 	 scanf("%d %s %f",&emp.eid,&emp.str,&emp.sal);
//    printf("%d %s %0.2f",emp.eid,emp.str,emp.sal);
      printf("find the size of structure %d",sizeof(emp));
// it give output by total sum of data types  
   printf("but in union it give only biggest datatypes value ");
	
	return 0;
}
