#include<stdio.h>
int fibanocci(int n){
	if(n==0)
	return 0;
	else if (n==1)
	return 1;
	else
	return fibanocci(n-1)+fibanocci(n-2);
}
int main(){
	int n;
	printf("enter no of fibanocci numbers to be generated=");
	scanf("%d",&n);
	
	printf("fibanocci series:");
	for(int i=0;i<n;i++){
		printf("%d\t",fibanocci(i));
		
	}
	printf("\n");
	
	
}
