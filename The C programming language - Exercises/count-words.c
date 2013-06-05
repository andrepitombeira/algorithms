#include "stdafx.h"
#include "stdlib.h";

#define IN 1 //inside a word
#define OUT 0 //outside a word

//count lines, words and characteres in input
int main(int argc, _TCHAR* argv[])
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n') {
			+nl;
		}
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if(state ==  OUT) {
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);

	system("pause"); 
	return 0;
}
