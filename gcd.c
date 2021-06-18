#include<stdio.h>

int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int m, n;
	printf("Enter two numbers: ");
	scanf("%d %d", &m, &n);
	printf("\nThe GCD of %d and %d is %d\n", m, n, gcd(m,n));
	return 0;
}
