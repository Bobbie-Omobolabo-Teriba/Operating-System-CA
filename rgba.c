#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BASE 16 //constant for base 16
#define CHAR_LENGTH 3 //constant for number of characters

 int main() {

	//char array for hex value
	char hex_r[CHAR_LENGTH];
	char hex_g[CHAR_LENGTH];
	char hex_b[CHAR_LENGTH];
	char hex_a[CHAR_LENGTH];

	//used to store strtol value
	long r;
	long g;
	long b;
	long a;

	//read input until scanf reaches end of file
	while (scanf("%s %s %s %s",hex_r,hex_g,hex_b,hex_a) != EOF)
	{
		 //strtol will convert string to long int value given a base
		 r = strtol(hex_r, NULL, BASE);
		 g = strtol(hex_g, NULL, BASE);
		 b = strtol(hex_b, NULL, BASE);
		 a = strtol(hex_a, NULL, BASE);

		 printf("rgba( %ld , %ld , %ld , %ld )\n",r,g,b,a);

	}

    return 0;

}
