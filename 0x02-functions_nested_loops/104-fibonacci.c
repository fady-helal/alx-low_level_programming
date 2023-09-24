#include <stdio.h>
/***/
int main(void)
{
	int first, second, next, i;
	first = 1;
	second = 2;
	printf("%d, %d", first, second);
	 for (int i = 3; i <= 98; i++)
	 {
		 next = first + second;
		 printf(", %d", next);
		 first = second;
        	second = next;
    	}
	 printf("\n");

    return 0;
}
