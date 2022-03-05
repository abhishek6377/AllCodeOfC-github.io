//first union came in old time we use  the union because in old  day memory are very less we used like 12mb 
//it easily used but today we used structure  and union take biggest value of data types only one memory allocated all  dependent 
//but in union one problem if we give all value at one time it give some garbage value that problem that we used structure in today time 
 #include<stdio.h>
union employee{
	int eid;
	char str[100];
	double sal;
}emp;
int main(){
//	union emoloyee emp;
//	 struct employee emp;// by we not declared the structure we use this shortcut method declare there
//     printf("By this we using it give some garbage value when we give all value at one time\n");
//	printf("enter your eid and name and salary\n");
//	scanf("%d %s %f",&emp.eid,&emp.str,&emp.sal);
//    printf("%d %s %0.2f",emp.eid,emp.str,emp.sal);
printf("It run when we give value at single single like this \n");
printf("Enter eid \n");
scanf("%d",&emp.eid);
printf(" eid  %d \n",emp.eid);
printf("Enter your name  \n");
scanf("%s",&emp.str);
printf(" name   %s \n",emp.str);
printf("Enter your salary \n");
scanf("%lf",&emp.sal);
printf(" salary %0.2lf\n",emp.sal);
printf("It give size of biggest data types not sum like strucure ");
printf("size of %d",sizeof(emp));
return 0;
}
