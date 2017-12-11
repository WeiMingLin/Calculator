#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char inputbuffer[1024];
char calculatorbuffer[1024];

int main(int argc, char *argv[]) {
/*	int counter = 0;
	char get = getchar();
	while(get != EOF) {
		if(get != '\n') {
			inputbuffer[counter] = get;
			counter++;
			if(counter == 10) {
				printf("\n\tThe input expression is too long.\n");
			}
		} else {
			for(int i = 0; i < counter; i++) {
				calculatorbuffer[i] = inputbuffer[i];
				inputbuffer[i] = 0;
			}
			counter = 0;
			getexpression(calculatorbuffer);
		}
		get = getchar();
	}
*/
	while(inputbuffer[0] != EOF){
		getexpressoion(inputbuffer,calculatorbuffer);
		operation(calculatorbuffer);
	}
	
	return 0;
}
