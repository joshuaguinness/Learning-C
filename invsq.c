#include <stdio.h>
#include <math.h>

int main() {

	// Variable declaration
	int n;
	double a;
	double x0;
	double ei;

	// User enters a, x0, and n
	printf("Enter a, x0, and n: ");
	scanf("%lf%lf%d", &a, &x0, &n);

	// Setting the first xi as x0 
	double xi = x0;

	/* For loop which calculates a new approx.
	and error every time and then outputs it */
	// The loop runs n times as specified by user input
	for (int i = 0; i < n; i++) {
		xi = xi*(1.5 - 0.5*a*xi*xi);
		ei = fabs(xi - (1 / sqrt(a)))*sqrt(a);
		printf("%d %.15e %.2e\n", i+1, xi, ei);
	}

	// Return statement
	return 0;
}