#include "mystring.h"

void getexpressoion(char inputbuffer[],char calculatorbuffer[])
{
	gets(inputbuffer);
	for(int i = 0; inputbuffer[i] != '\n'; i++) {
		if(inputbuffer[i] == EOF) {
			inputbuffer[0] = EOF;
			break;
		}
		calculatorbuffer[i] = inputbuffer[i];
		inputbuffer[i] = 0;
	}
}
