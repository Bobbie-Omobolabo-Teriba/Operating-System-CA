#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char** argv) {
	for(int i = 1; i < argc; ++i)
	{
		if(strlen(argv[i]) == 7 || strlen(argv[i]) == 9)
		{
			printf("%s\n",argv[i]);
		}
	}


//  char* hexdec = "FF";
  // int decimal = 0;

  // int length = strlen(hexdec);
  // for(int i = 0; i < length; i++){
    // char digit = hexdec[length - 1 - i];

    // if(digit >= '0' && digit <= '9'){
      // decimal += (digit - '0') * pow(16,i);
    // }
    // else{
    // decimal += (digit - 'A' + 10) * pow(16,i);
   //  }
  // }

  // printf("Dec %d", decimal);

	return 0;
}
