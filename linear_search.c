#include<stdio.h>
#define MAX 100
int main()
{
	int ele, arr[MAX], n, found=0;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("\nEnter the elements of the array:\n");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nEnter the element to search for: ");
	scanf("%d", &ele);
	for(int i=0; i < n; i++)
		if(arr[i] == ele){
			printf("\nElement found at pos: %d\n", i+1);
			found=1;
		}
	if(!found)
		printf("\nElement not found.\n");

}
