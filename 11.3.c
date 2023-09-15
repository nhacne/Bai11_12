# include <stdio.h>

// vi du 11.3

void main () {
	char alpha[26] ;
	int i, j;
	for (i = 65, j = 0; i < 91; i++, j++) {
		alpha[j] = i ;
		printf("\n %d	: %d", j, alpha[j]);
	}
}
