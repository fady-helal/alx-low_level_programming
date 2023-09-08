#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n==0){
	printf("n equal zero\n");
}	
	else if (n > 1) {
	printf ("number is positive\n");
}
	else (n < 1){
	printf ("number is negative \n");
}
	return (0);
}
