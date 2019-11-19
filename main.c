#include <stdio.h>
#include <stdlib.h>
#include "headerbj.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//player info
int n_user; 


//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}

int main(int argc, char *argv[]) {

	configUser();
	
	return 0;
}
