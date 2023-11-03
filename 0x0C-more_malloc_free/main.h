#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void print_int(unsigned long int n);
char *big_multiply(char *s1, char *s2);
int main(int argc, char **argv);
int _strlen(char *s);
int _isdigit(int c);
#endif
