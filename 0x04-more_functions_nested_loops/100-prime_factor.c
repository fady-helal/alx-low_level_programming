#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: find largest prime number
 *
 * Return: Alwyas 0 (Success)
 */
long largest_prime_factor(long n);
long largest_prime_factor(long n) {
    long i = 2;
    while (i * i <= n) {
        if (n % i != 0) {
            i += 1;
        } else {
            n /= i;
        }
    }
    return n;
}

int main() {
    printf("%ld\n", largest_prime_factor(612852475143));
    return 0;
}
