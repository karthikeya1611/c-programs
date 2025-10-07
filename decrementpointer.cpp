//increment  and decrement of an pointer

#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,50};
	int*ptr=arr;
	printf("initial pointer value:\n");
	printf("Address: %p, value; %d\n",ptr,*ptr);
	ptr--;
	printf("\n after decrement pointer by 1;\n");
	printf("address:%p,value:%d\n",ptr,*ptr);
}
