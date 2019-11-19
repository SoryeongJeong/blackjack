#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;	

//player info
int n_user;                        	//number of users
int dollar[N_MAX_USER];	            //dollars that each player has
int player_num;                     // nth player (server's player num = n_user, my player_num = 0)

//play yard information
int bet[N_MAX_USER];               //current betting 

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

	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();
	
	//Game initialization --------
	//1. players' dollar
	
	//2. card tray
	mixCardTray();

	
	return 0;
}
