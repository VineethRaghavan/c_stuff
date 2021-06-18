#include<stdio.h>
#include<ctype.h>
int main()
{
	int i, n, sign;
	char str[10];
	scanf("%s", str);
	for(i=0;isspace(str[i]);i++);
	sign = (str[i] == '-')? -1:1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	for(n=0;isdigit(str[i]);i++)
		n = 10*n + (str[i] - '0');
	printf("%d\n", sign*n);
	return 0;
}
