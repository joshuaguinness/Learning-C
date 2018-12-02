#include <stdio.h>

int main() {

	// Variable Declaration and Initialization
	int numberOfSquares = 0;

	// Checks to see whether input is valid, asking user to re-enter if not
	while (numberOfSquares <= 0 || numberOfSquares > 50) {
		printf("Enter number of squares: ");
		scanf("%d", &numberOfSquares);
	}

	// Calculating the number of full rows and how squares in a partial row needed
	int numberOfFullRows = numberOfSquares / 5;
	int numberOfAdditionalSquares = numberOfSquares % 5;

	// Prints the required number of full rows of squares
	for (int i = 0; i < numberOfFullRows; i++) {
		printf("### ### ### ### ###\n### ### ### ### ###\n### ### ### ### ###\n");
		printf("\n");
	}

	// Prints the required number of squres for a partial row
	switch (numberOfAdditionalSquares) {
		case 1:	printf("###\n###\n###\n");
				break;
		case 2:	printf("### ###\n### ###\n### ###\n");
				break;
		case 3: printf("### ### ###\n### ### ###\n### ### ###\n");
				break;
		case 4:	printf("### ### ### ###\n### ### ### ###\n### ### ### ###\n");
				break;
		default:
				break;

	}

	// Return statement
	return 0;
}