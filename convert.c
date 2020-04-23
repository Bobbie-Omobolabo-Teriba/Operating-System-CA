#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BASE 16 //constant for base 16
#define CHAR_LENGTH 2 //constant for number of characters

int main() {

	//char array for hex value
	char hex[CHAR_LENGTH];

	//used to store strtol value
	long n;
	while (scanf("%s",hex) != EOF)
	{
		//strtol will convert string to long int value given a base
		n = strtol(hex, NULL, BASE);
		//print decimal value using %ld
		printf("%ld,",n);
	}

	printf("\n");

	return 0;
}
