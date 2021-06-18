#include<stdio.h>
#include<math.h>
#define MAX 100
int main()
{
	float arr[MAX], mean, var, sum=0, varsum=0;
	int n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("\nEnter the numbers:\n");
	for(int i=0;i<n;i++){
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	mean = sum/n;
	for(int i = 0; i < n; i++){ 
		varsum +=pow((arr[i] - mean),2); 
	}
	var = varsum/n;
	printf("\nMean = %f\nPopulation Variance = %f", mean, var);
	printf("\nPopulation Standard deviation = %f\n", sqrt(var));
	return 0;
}
