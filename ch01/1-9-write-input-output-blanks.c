/*
 * Write a program to copy its input to its output, replacing each
 string of one or more blanks by a single blank
 */

#include <stdio.h>

int main() {
	int c;
	int lastc = '-';

	while((c = getchar()) != EOF) {
		
		if(lastc != ' ' || c != ' ') putchar(c);
		
		lastc = c;	
	}
}

