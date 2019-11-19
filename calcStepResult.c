#include "headerbj.h"


// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack

extern int cardSum[N_MAX_USER];			
extern int player_num;
extern int n_user;
extern int bet[N_MAX_USER]; 
extern int dollar[N_MAX_USER];

int calcStepResult() {
	
	for(player_num =0; player_num<n_user;player_num++)	
		if (cardSum[player_num] == 21)
		{
			printf("\t ::: BLACK JACK! conguratulation, you win! ---> +$%d ($%d)\n",2*bet[player_num], dollar[player_num] + 2*bet[player_num]);
		}
		else if (cardSum[player_num] >21)
		{
			printf("\t ::: DEAD (sum : %d) --> -$%d\n",cardSum[player_num], bet[player_num], dollar[player_num]-bet[player_num]);
		}
	
	if (player_num == n_user)
	{
		if(cardSum[n_user] <21 )
		{
			printf("[[[[][server result is.... %d]]]]\n", cardSum[n_user]);
		}
		else if(cardSum[n_user == 21])
		{
			printf("[[[[][server result is.... %d]]]]\n", cardSum[n_user]);
		}
		else
		{
			printf("server DEAD (sum : %d)\n", cardSum[n_user]);
			printf("[[[[][server result is...... overflow!]]]]\n");
			
		}
	}
	
}
