#include <stdio.h>
#define MAX_WORDS 25
#define OUT 0
#define IN 1

int main() {
	int c, nw, tmp_ln, state, i, j;
	int hist[25];
	nw = tmp_ln = 0;
	state = OUT;

	for (i = 0; i < MAX_WORDS; i++)
		hist[i] = 0;

	while((c = getchar()) != EOF && nw < MAX_WORDS){
		if(c == '\n' || c == '\t' || c == ' ') {
			if(state == IN) {
				hist[nw] = tmp_ln;
				++nw;
				tmp_ln = 0;
			}
		} else {
			state = IN;
			++tmp_ln;
		}
	}

	for(i = 0; i < MAX_WORDS; i++) {
		if (hist[i] != 0) {
			for (j = 1; j <= hist[i]; j++)
				printf("*");
			printf("\n");
		}
	}
}
