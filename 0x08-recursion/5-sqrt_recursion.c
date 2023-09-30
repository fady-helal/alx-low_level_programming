#include "main.h"
/**
 * _sqrt_recursion - find natural square root
 * @n : int to find square root
 * @x : square root
 * return : int
*/
int square (int n,int x);
int _sqrt_recursion(int n)
{
	return (square(n ,1));
}
/**
 * square - find square root
 * @n : int to find square root
 * @x : square root
 * return : int 
*/
int square (int n,int x)
{
if (x * x == n)
{
	return (x);
}
else if (x * x < n)
{
	return (square(n , x + 1));
}
else 
return (-1);
}
