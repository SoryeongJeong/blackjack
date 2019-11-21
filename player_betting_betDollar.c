#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"
#include <time.h>

//betting
/*player betting*/

extern int bet[N_MAX_USER]; 
extern int dollar[N_MAX_USER];
extern int player_num;
extern int n_user;

int betDollar(void) {

	printf("\n -----------BETTING STEP------------\n");
	srand((unsigned)time(NULL));

		do
		{	
			printf("   ->  your betting (total : $%d) : ",dollar[0]);
			bet[0] = getIntegerInput();
		
			if (bet[0]<=0)
				{
					printf("invalid input for betting (%d)\n",bet[0]);
				}
			else if (bet[0]>dollar[0])
				{
					printf("you only have %d! bet again \n",dollar[0]);
				}
		}while((bet[0] <= 0) || (bet[0] > dollar[0]));
	
	for (player_num=1;player_num<n_user;player_num++)
	{	
		
		bet[player_num] = 1 + (rand()%N_MAX_BET);
		printf("   ->  player%d bets $%d (out of $%d)\n",player_num, bet[player_num], dollar[player_num]);
	}
	
	printf("-------------------------------------\n");
}

