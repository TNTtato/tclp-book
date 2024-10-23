#include <stdio.h>

int main() {
	int c, nw, no, i;
	int nd[10];

	nw = no = 0;
	for(i = 0; i < 10; ++i)
		nd[i] = 0;

	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9')
			++nd[c - '0'];
		else if(c == '\n' || c == ' ' || c == '\t')
			++nw;
		else
			++no;
	}

	printf("Count digits:\n");
	for(i = 0; i < 10; ++i)
		printf("\t%d: %d\n", i, nd[i]);
	printf("\nCount whites: %d\nCount Others: %d\n", nw, no);
}
