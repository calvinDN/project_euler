/**
 * Calvin Nichols
 * June 14, 2013
 * Project Euler, Problem 1
 */

#include <stdio.h>

int main () {
	int i, sum=0;

	printf("Sum of all multiples of 3 and 5 below 1000.\n");

	for (i=0; i<1000; i++)
		if ( (i % 3 == 0) || (i % 5 == 0) )
			sum += i;

	printf("%d\n", sum);

	return 0;
}