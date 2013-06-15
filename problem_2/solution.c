/**
 * Calvin Nichols
 * June 15, 2013
 * Project Euler, Problem 2
 */

#include <stdio.h>
#define MAX 4000000
int main () {
	int sum=0, first=1, second=2, next;

	next = first + second;
	while (next < MAX) {
		first = second;
		second = next;
		next = first + second;

		if (next % 2 == 0)
			sum += next;
	}
	printf("%d\n", sum+2);

	return 0;
}