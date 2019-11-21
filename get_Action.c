#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

extern int cardIndex;
extern int cardSum[N_MAX_USER];
extern int player_num;
extern int CardTray[N_CARDSET*N_CARD];
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	
extern int n_user;
extern int cardcnt;

int getAction(int cnt) {
		
		int answer;
		if (player_num == 0)
		{		
				
				printf("Action? (0 - go, others - stay) : ");
				answer = getIntegerInput();
				if (answer == 0)
					{
							cnt = cardcnt + 1;
							cardIndex++;
							cardhold[0][cnt] = CardTray[cardIndex];      		 // my nth card
							cardSum[0] += getCardNum(CardTray[cardIndex]);
						}
		}
		else if (player_num > 0 )
		{		
				printf("Action? (0 - go, others - stay) ");
				if (cardSum[player_num] < 17)
				{	
				
						printf("   GO!\n");	
						cnt = cardcnt + 1;	
						cardIndex++;
						cardhold[n_user][cnt] = CardTray[cardIndex];			//player nth card
						cardSum[player_num] += getCardNum(CardTray[cardIndex]);
				}
				
				else
				{
					printf("   STAY!\n");
				}
		}
	}
