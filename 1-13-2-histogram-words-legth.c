#include <stdio.h>
#define MAX_WORDS 25
#define OUT 0
#define IN 1

int main() {
	int c, nw, tmp_ln, state, i, j, max_ln;
	int hist[25];
	nw = tmp_ln = max_ln = 0;
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

	for(i = 0; i < MAX_WORDS; ++i)
		if(hist[i] > max_ln) 
			max_ln = hist[i];

	for(i = max_ln; i > 0; --i) {
		for(j = 0; j < MAX_WORDS; ++j) {
			if(hist[j] > 0 && (hist[j] - i) >= 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}	
}
