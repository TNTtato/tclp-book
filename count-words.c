#include <stdio.h>
#define OUT 0
#define IN 1

int main() {
	int c, nc, nl, nw, state;
	nc = nl = nw = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		++nc;
		if(c == '\n') 
			++nl;
		if(c == '\n' || c == ' ' || c == '\t') 
			state = OUT;
		else if(state == OUT) {
			++nw;
			state = IN;
		}

	}
	printf("nc: %d\nnl: %d\nnw: %d\n", nc, nl, nw);
}
