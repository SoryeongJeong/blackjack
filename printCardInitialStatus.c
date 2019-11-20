#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

//print initial card status

extern int CardTray[N_CARDSET*N_CARD];
extern int player_num;
extern int n_user;
extern int cardIndex;
extern int cardSum[N_MAX_USER];


void printCardInitialStatus(void) {
	
	printf("\n ----------- CARD OFFERING ------------\n");
	
			printf("   -> server     : ");
			printf("X ");
			cardSum[n_user] = CardTray[cardIndex];
			cardIndex ++;
			printCard(CardTray[cardIndex]);
			printf("\n");
			cardSum[n_user] += CardTray[cardIndex];
			cardIndex ++;

		
	for(player_num=0; player_num<n_user; player_num++)	
		{
			if (player_num ==0)
			{
				printf("   -> you        : ");
				printCard(CardTray[cardIndex]);
				cardSum[0] = CardTray[cardIndex];
				cardIndex ++;
				printCard(CardTray[cardIndex]);
				cardSum[0] += CardTray[cardIndex];
				cardIndex ++;
				printf("\n");
			}
			
			else 
			{
				printf("   -> player %d   : ");
				printCard(CardTray[cardIndex]);
				cardSum[player_num] = CardTray[cardIndex];
				cardIndex ++;		
				printCard(CardTray[cardIndex]);
				cardSum[player_num] += CardTray[cardIndex];
				cardIndex ++;
				printf("\n");
			}
			}
	
	}
	
