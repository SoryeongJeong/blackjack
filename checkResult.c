#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"


// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack

extern int player_num;
extern int cardSum[N_MAX_USER];
extern int dollar[N_MAX_USER];	 
extern int bet[N_MAX_USER]; 
extern int n_user;

int checkResult() {
	
	int dif_player;  // different player
	for(player_num =0;player_num<=n_user;player_num++)
	{	
		if (player_num==0)
		{
			printf("  --> your result : ");
				if(cardSum[0] < 21)
				{
					for(dif_player =1;dif_player<=n_user;dif_player++)
					{
							if((cardSum[dif_player]==21))
						{
							printf("lose! (sum : %d) --> $%d\n", cardSum[0],dollar[0]-bet[0]);
							dollar[0] -= bet[0];
						}
						else if(cardSum[0] > cardSum[dif_player])
						{
							printf("win (sum : %d) --> $%d\n", cardSum[0], dollar[0] + 2*bet[0]);
							dollar[0] += 2*bet[0]; 
						}
					}
				}
				else if(cardSum[0] > 21)
				{
					printf("lose due to overflow! ($%d)\n", dollar[0]-bet[0]);
					dollar[0] -= bet[0]; 
				}
				else if(cardSum[0] == 21)
				{
					printf("BlackJack! win ($%d)\n", dollar[0] + 2*bet[0]);
					dollar[0] += 2*bet[0];
				}
		}
		else
		{
			printf("  --> player %d result : ", player_num);
				if(cardSum[player_num] < 21)
				{
					for(dif_player =0;(dif_player != player_num)&&(dif_player<=n_user);dif_player++)
					{
							if((cardSum[dif_player]==21))
						{
							printf("lose! (sum : %d) --> $%d\n", cardSum[player_num],dollar[player_num]-bet[player_num]);
							dollar[player_num] -= bet[player_num];
						}
						else if(cardSum[0] > cardSum[dif_player])
						{
							printf("win (sum : %d) --> $%d\n", cardSum[player_num], dollar[player_num] + 2*bet[player_num]);
							dollar[0] += 2*bet[0]; 
						}
					}
				}
				else if(cardSum[player_num] > 21)
				{
					printf("lose due to overflow! ($%d)\n", dollar[player_num]-bet[player_num]);
					dollar[player_num] -= bet[player_num]; 
				}
				else if(cardSum[player_num] == 21)
				{
					printf("BlackJack! win ($%d)\n", dollar[player_num] + 2*bet[player_num]);
					dollar[player_num] += 2*bet[player_num];
				}
		}
	
}

}
