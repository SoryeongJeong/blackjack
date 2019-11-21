#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

extern int dollar[N_MAX_USER];	
extern int player_num;
extern int cardIndex;
extern int n_user;
int checkWinner() {
	
	int max_user;       	 // max dollar player
	max_user = dollar[0];    //assume max_user = final_dollar[0];
	
	for (player_num=1; player_num<n_user; player_num++)
	{
		if (max_user<dollar[player_num])
		{
			max_user = dollar[player_num];
		}
	}
	
	if (cardIndex >= 52)     //condition for game end 
	{
		printf("\ncard ran out of the tray!! finishing the game...\n");
		printf("----------------------------------------------------\n");
		printf("----------------------------------------------------\n");
		printf("----------------------------------------------------\n");
	
		printf("game end! your money : $d ", dollar[0]);
		printf("players's money : ");
		
		for (player_num = 1;player_num<n_user;player_num++)
		{
			printf("%d ", dollar[player_num]);
		}
		
		printf("\n");
		
		for(player_num=0; player_num < n_user; player_num++)
		{
			if(max_user == dollar[player_num])
			{
				printf("player %d's win", player_num);
			}
		}
	}
}

