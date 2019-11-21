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
							cardhold[0][cnt] = pullCard();
							cardSum[0] += getCardNum(CardTray[cardIndex]);
						}
						printf("cardnum : %i, number:%i\n", CardTray[cardIndex] , getCardNum(CardTray[cardIndex]));	
		}
		else if (player_num > 0 )
		{		
				printf("Action? (0 - go, others - stay) ");
				if (cardSum[player_num] < 17)
				{	
					for(cnt=2; cnt<10;cnt++)
					{
						printf("   GO!\n");		
						cardIndex++;
						cardhold[player_num][cnt] = pullCard();
						cardSum[player_num] += getCardNum(CardTray[cardIndex]);
				//	cardhold[n_user][cnt] = CardTray[cardIndex];
				
					}
				
			}
				else
				{
					printf("   STAY!\n");
				}
		}
	}
