#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point 
 *
 * Description : positive or negative 
 *
 * return (0) : success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
{
	printf("n equal zero\n");
}	
	else if (n > 1)
{
	printf ("%d number is positive\n",n);
}
	else (n < 1)
{
	printf ("%d number is negative \n",n);
}
	return (0);
}
