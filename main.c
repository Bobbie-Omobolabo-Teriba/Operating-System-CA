#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	//char str[100];

	  //char buffer [33];
	  

	//scanf("%s",str);

//	   printf( "\n YOU ENTERED %s", str);
	//fgets(str,sizeof str,stdin);

	for(int i = 1; i < argc; ++i)
	{
		//printf("wfeef");
		if(strlen(argv[i]) == 7 || strlen(argv[i]) == 9)
		{
			printf("%s\n",argv[i]);
		}
		//printf("%s\n",argv[0]);
		//}
	}


	return 0;
}
