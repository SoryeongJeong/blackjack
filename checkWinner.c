#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

extern int dollar[N_MAX_USER];	
extern int player_num;
extern int cardIndex;
int checkWinner() {
	
	if (cardIndex > 52)
	{
		printf("\ncard ran out of the tray!! finishing the game...\n");
		printf("----------------------------------------------------\n");
		printf("----------------------------------------------------\n");
	
		printf("game end! your money : $d, players's money : %d", dollar[0],dollar[player_num]);
		printf("player %d's win", dollar[player_num]);
	}
}

