//write a c-program to immplement double pointer or pointer to pointer
#include<stdio.h>
int main(){
	int var;
	int*ptr;
	int**pptr;
	var=200;
	ptr=&var;
	pptr=&ptr;
	printf("value of var:%d",var);
	printf("\n value of *ptr:%d",*ptr);
	printf("\n value of **pptr:%d",**pptr);
	printf("\n address of *ptr:%x",ptr);
	printf("\n address of **pptr:%x",pptr);
	
}
