#include <stdio.h>

int main() {

	// Variable declaration and initialization
	int num1 = 0; 
	int num2 = 1;
	int nextNum = 0;
	int tempNum, recentNum;
	int maxNum = 0;
	int div2 = 0;
	int div3 = 0;
	int div5 = 0;
	int div6 = 0;
	int div10 = 0;
	int div15 = 0;
	int notDiv = 0;

	/* Takes in the number the fib sequence shouldn't surpass
	and ensures it is a positive integer */
	while (maxNum <= 0) {
		printf("Enter a positive integer: ");
		scanf("%d", &maxNum);
	}
	
	// Ouputs text
	printf("\nFibonacci sequence up to %d :\n", maxNum);

	/* If else statement which executes two different blocks of code depending
	on whether the max number is 1, or not 1. Needed because the way the program 
	is coded, hardcodes 1 in and automatically adds it. Therefore if a user enters 1
	as a max value, nothing will be hardcoded in and the output will still be correct */
	
	// Output of amount of numbers divisible
	if (maxNum == 1) {
		printf("\ndivisble by:\n");
		printf("2\t\t\t%d\n", div2);
		printf("3\t\t\t%d\n", div3);
		printf("5\t\t\t%d\n", div5);
		printf("6\t\t\t%d\n", div6);
		printf("10\t\t\t%d\n", div10);
		printf("15\t\t\t%d\n", div15);
		printf("-\t\t\t%d\n", notDiv);
	}
	else {
		/* Outputs the first number of the fib sequence so that it makes the rest of the program easier
		and adds 1 value to the not divisible variable */
		printf("1 ");
		notDiv++;

		/* While statement which executes as long as the next number of the fib sequence
		is less than the max number entered by the user */
		while (nextNum < maxNum) {

			/* Gets the next number in the fib sequence by adding the past one to the current one
			and then changing the values of the past and current one. Also calculates what the next
			term will be so that it can stop executing the loop before it reaches it */
			tempNum = num2;
			num2 += num1;
			num1 = tempNum;
			nextNum = num2 + num1;
			printf("%d ", num2);

			/* Series of if and else statements which increase variables depending on whether the
			most recent number is divisble by them or not */
			if (num2 % 2 == 0) {
				div2++;
			}
			if (num2 % 3 == 0) {
				div3++;
			}
			if (num2 % 5 == 0) {
				div5++;
			}
			if (num2 % 6 == 0) {
				div6++;
			}
			if (num2 % 10 == 0) {
				div10++;
			}
			if (num2 % 15 == 0) {
				div15++;
			}
			if ((num2 % 2 == 0) || (num2 % 3 == 0) || (num2 % 5 == 0) || (num2 % 6 == 0) || (num2 % 10 == 0) || (num2 % 15 == 0)) {

			}
			else {
				notDiv++;
			}
		}

		// Outputs info about amount of numbers divisible
		printf("\n\ndivisble by:\n");
		printf("2\t\t\t%d\n", div2);
		printf("3\t\t\t%d\n", div3);
		printf("5\t\t\t%d\n", div5);
		printf("6\t\t\t%d\n", div6);
		printf("10\t\t\t%d\n", div10);
		printf("15\t\t\t%d\n", div15);
		printf("-\t\t\t%d\n", notDiv);
	}

	// Return statement
	return 0;
}