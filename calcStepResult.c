#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"


// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack

extern int cardSum[N_MAX_USER];			
extern int player_num;
extern int n_user;
extern int bet[N_MAX_USER]; 
extern int dollar[N_MAX_USER];
extern int CardTray[N_CARDSET*N_CARD];

int calcStepResult() {
	
	if((player_num >=0) && (player_num <n_user))
	{
		if (cardSum[player_num] == 21)
		{
		printf("\t ::: BLACK JACK! conguratulation, win! ---> +$%d ($%d)\n",2*bet[player_num], dollar[player_num] + 2*bet[player_num]);
		}
		else if (cardSum[player_num] >21)
		{
			printf("\t ::: DEAD (sum : %d) --> -$%d\n",cardSum[player_num], bet[player_num], dollar[player_num]-bet[player_num]);
		}
	}
	else if (player_num == n_user)
	{
		if(cardSum[n_user] <21 )
		{
			printf("[[[[[server result is.... %d]]]]\n", cardSum[n_user]);
		}
		else if(cardSum[n_user] == 21)
		{
			if((CardTray[0] + CardTray[1])== 21)	
			{
				printf("BlackJack! T_T... server win \n");
				printf("[[[[][server result is.... BlackJack! T_T...all remained players lose!]]]]\n");
			}
			else 
				printf("[[[[][server result is.... %d]]]]\n", cardSum[n_user]);
		}
		else
		{
			printf("server DEAD (sum : %d)\n", cardSum[n_user]);
			printf("[[[[][server result is...... overflow!]]]]\n");
			
		}
	}
	
}
