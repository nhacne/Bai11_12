# include <stdio.h>
 
// vi du 11.2

void main () {
	int ary[10] = {1,2,3,4,5,6,7,8,9,10}, i, total, high;
	for (i = 1; i < 10; i++) {
		if (ary[i] > high)
			high = ary[i];
	}
	printf("\n Highest value entered was %d",high);
	for (i = 0, total = 0; i < 10; i++) {
		total = total + ary[i];
}
	printf ("\n The average of the element of ary is : %d", total / i);
}
