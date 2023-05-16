#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 1;

	switch (i % 3) {
		case 0: printf("zero");
			//break;
		case 1: printf("one");
			//break;
		case 2: printf("two");
			//break;
	}

	return EXIT_SUCCESS;
}