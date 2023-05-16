#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 5;
	int j = 0;
	int k = -5;

	printf("%d", i && j || k);

	return EXIT_SUCCESS;
}