#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	for(int i = 1; i < argc; ++i)
	{
		if(strlen(argv[i]) == 7 || strlen(argv[i]) == 9)
		{
			printf("%s\n",argv[i]);
		}
	}

	return 0;
}
