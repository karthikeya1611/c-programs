#include <stdio.h>
int Lcm(int a,int b, int multiple){
	if(multiple % a == 0 && multiple % b == 0)
	return multiple;
	else
	return Lcm(a,b,multiple+1);
	
}
int main(){
	int a,b;
	printf("enter the values of a,b:");
	scanf("%d%d",&a,&b);
	
	int result=Lcm(a,b,(a>b)?a:b);
	printf("LCM of %d and %d is:%d",a,b,result);
}
