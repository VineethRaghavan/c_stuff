#include<stdio.h>

int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x&1)
		printf("\nIt is an odd number.\n");
	else
		printf("\nIt is an even number.\n");
	return 0;
}
