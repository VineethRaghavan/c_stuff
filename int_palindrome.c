#include<stdio.h>

int main(){
	int x, temp, rem, new_int=0;
	printf("Enter an integer: ");
	scanf("%d", &x);
	temp = x;
	while(temp != 0){
		rem = temp%10;
		new_int = 10*new_int + rem;
		temp /= 10;
	}
	if (new_int == x)
		printf("%d is a palindrome\n", x);
	else
		printf("%d is not a palindrome\n", x);
	return 0;
}
