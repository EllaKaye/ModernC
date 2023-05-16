#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 2;
	int j = 1;

	printf("%d", !!i + !j);

	return EXIT_SUCCESS;
}