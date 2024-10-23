#include <stdio.h>

int main() {
	int c, nblanks, nlines, ntabs;
	nblanks = nlines = ntabs = 0;
	while((c = getchar()) != EOF) {
		if (c == ' ') ++nblanks;
		if (c == '\n') ++nlines;
		if (c == '\t') ++ntabs;
	}
	printf("NumBlanks: %d\nNumLines: %d\nNumTabs: %d\n", nblanks, nlines, ntabs);
}
