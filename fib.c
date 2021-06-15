#include<stdio.h>

int main(){
	double n, a=0, b=1, c;
	printf("Enter the number of terms to be generated: ");
	scanf("%lf", &n);
	if(n == 1)
		printf("0 ");
    else
        printf("0 1 ");
	for(int i = 2; i < n; i++){
		c = a+b;
		a = b;
		b = c;
		printf("%.0lf ", c);
	}
	return 0;
}
