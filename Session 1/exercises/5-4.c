#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 1;
	int j = 2;

	printf("%d", (i > j) - (i < j));

	return EXIT_SUCCESS;
}