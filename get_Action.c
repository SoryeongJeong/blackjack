#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

extern int cardIndex;
extern int cardSum[N_MAX_USER];
extern int player_num;
extern int CardTray[N_CARDSET*N_CARD];
extern int n_user;

int getAction(void) {
		 
		int answer;
	
		if (player_num == 0)
		{
				printf("Action? (0 - go, others - stay) : ");
				answer = getIntegerInput();
				if (answer == 0)
				{
						cardIndex++;
						cardSum[0] += CardTray[cardIndex];
				}
		}
		
		else if (player_num > 0 )
		{	
				printf("Action? (0 - go, others - stay) ");
				if (cardSum[player_num] < 17)
				{
					printf("   GO!\n");		
					cardIndex++;
					cardSum[player_num] += CardTray[cardIndex];
				}
				else
				{
					printf("   STAY!\n");
				}
		}
	}
