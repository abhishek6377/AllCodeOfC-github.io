
// ************************************this is simple macro program************************* 
//macro means use same value and samething use in program so we use  the macro 
//#include<stdio.h>
//#define money 100
////note semicolon not allow in macro
//int main(){
//	char name[30]="Abhishek";
//	char name1[30]="Bhawani";
//	char name2[30]="Piyush";
//	char name3[30]="Lakshay";
//	
//	printf(" %s got %d ruppee\n",name ,money);
//	
//	printf(" %s got %d ruppee\n",name1 ,money);
//	
//	printf(" %s got %d ruppee\n",name2 ,money);
//	
//	printf(" %s got %d ruppee\n",name3 ,money);
//	
//	return 0;
//}

// using macro and calculate the area of circle 


//#include<stdio.h>
//# define area 3.14*r*r
//int main(){
//	float r;
//	printf(" please enter the radius \n");
//	scanf("%f",&r);
//	printf("Area of circle %f",area);
//	return 0;
//}
// make a function user-defined by macro

#include<stdio.h>
#define money() (100+20)
//note semicolon not allow in macro
int main(){
	char name[30]="Abhishek";
	char name1[30]="Bhawani";
	char name2[30]="Piyush";
	char name3[30]="Lakshay";
	
	printf(" %s got %d ruppee\n",name ,money());
	
	printf(" %s got %d ruppee\n",name1 ,money());
	
	printf(" %s got %d ruppee\n",name2 ,money());
	
	printf(" %s got %d ruppee\n",name3 ,money());
	
	return 0;
}























