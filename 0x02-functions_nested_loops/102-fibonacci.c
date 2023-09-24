#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: fibonacci number
 *
 * Return: Alwyas 0 (Success)
 *
 */

int main(void)
{
int first, second, next, i;
first = 0;
second = 1;
	for (i = 0 ; i < 50 ; i++)
	{
		next = first + second;
		second = first;
		first = next;
		printf("res = %d ", next);
		if (i != 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
