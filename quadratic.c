#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, dis;
	float x1, x2;
	printf("Enter the coefficients of the quadratic equation: \n");
	scanf("%d %d %d", &a, &b, &c);
	dis = b*b-4*a*c;
	if(dis>0){
		x1 = (-b + sqrt(dis))/2.0;
		x2 = (-b - sqrt(dis))/2.0;
		printf("\nThe roots are:\n%.4f\n%.4f\n\n", x1, x2);
	}
	if(dis<0){
		x1 = -b/2.0;
		x2 = sqrt(4*a*c-b*b)/2.0;
		printf("\nThe roots are:\n%.4f + %.4f i\n%.4f - %.4f i\n\n", x1, x2, x1, x2);
	}
	else{	
		x1= -b/2.0;
		printf("\nThe roots are:\n%.4f\n%.4f\n\n", x1, x1);
	}
	return 0;
}

