#include <stdio.h>
#include <math.h>

int main(){

	double width, length, diagonal, sum;
	
	printf("Enter Length: \t");
	scanf("%lf", &length);
	
	printf("Enter width: \t");
	scanf("%lf", &width);
	
	double sqrWidth = pow(width, 2);
	double sqrLength = pow(length, 2);
	sum = sqrLength + sqrWidth;
	diagonal = sqrt(sum);
	
	printf("lenght was %.2lf \n", length);
	printf("Width was: %.2lf \n", width);
	printf("The diagonal is: %.2lf \n", diagonal);
	
	return 0;
	
}