//write a c-program to implement 2 dimensional array  of pointers
#include<stdio.h>
int main(){
	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int*arr2[3][3];
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		arr2[i][j]=&arr1[i][j];
		
	}	
	}
	printf("the values are \n");
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	printf("%d",*arr2[i][j]);}
	printf("\n");}
	return 0;
}
