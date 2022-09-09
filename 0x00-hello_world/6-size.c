#include <stdio.h>
/**
 * main - Prints the sizeof var types
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

	  int x;
	  char z;

	printf("The size of a char: %d byte(s)\n", sizeof(char));
       	printf("The size of an int: %d byte(s)\n", sizeof(int));
	printf("The size of a long int: %d byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("The size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
