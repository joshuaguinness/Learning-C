#include <stdio.h>
#include <math.h>

int main() {

	// Variable declaration
	double a;

	// Takes in user input a
	printf("Enter a: ");
	scanf("%lf", &a);

	// Sets the initial approx 
	double xi = 2 / (1 + a);

	/* Declares and initializes the error as 1 so that it
	does not get caught by the while loop the first time it executes */
	double ei = 1;

	/* While loop which continues to calculate and output approx. and error
	until the error value is <= 10^-13 */
	while (ei > 1E-13) {
		xi = xi * (1.5 - 0.5*a*xi*xi);
		ei = fabs(xi - (1 / sqrt(a))) * sqrt(a);
		printf("%.15e %.2e\n", xi, ei);
	}

	// Return statement
	return 0;
}