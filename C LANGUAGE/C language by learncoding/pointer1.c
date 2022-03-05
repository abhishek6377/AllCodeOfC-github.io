#include<stdio.h>
int main(){
	int a=10;
	int *p,**q,****o;
	p=&a;// a add
	q=&p;// a add
	o=&q;
	printf("%d\n",a);//a value 10
	printf("%d\n",&a);// address of a
	printf("%d\n",p); //same 
	printf("%d\n",*p);//10
	printf("%d\n",&p);//address of p
	printf("%d\n",q);//p address is q value
	printf("%d\n",**q);//10
	printf("%d\n",&q); //address of q
	printf("%d\n",o);
	printf("%d\n",***o);
	printf("%d\n",*****o);// if we use extrs ***it give address of own value like
	return 0;
}
