#include <stdio.h>
int main() {
	long counter = 0;
	int c;
	while((c = getchar()) != EOF) {
		if (c == '\n') 
			++counter;
	}
	printf("%ld\n", counter);
}

