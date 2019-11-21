#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

//print initial card status

extern int CardTray[N_CARDSET*N_CARD];
extern int player_num;
extern int n_user;
extern int cardIndex;												// nth one card out of 52 cards
extern int cardSum[N_MAX_USER];										// nth player card number SUM
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	


void printCardInitialStatus(void) {
	
	printf("\n ----------- CARD OFFERING ------------\n");
	
			printf("   -> server     : "); 							// server's Initial two Card
			printf("X ");
			
			cardSum[n_user] = getCardNum(CardTray[cardIndex]);
			cardhold[n_user][0] = CardTray[cardIndex];
			cardIndex ++;
			printCard(CardTray[cardIndex]);
			printf("\n");
			
			cardhold[n_user][0] = CardTray[cardIndex];
			cardSum[n_user] += getCardNum(CardTray[cardIndex]);
			cardhold[n_user][1] = CardTray[cardIndex];
			cardIndex ++;

		
	for(player_num=0; player_num<n_user; player_num++)	
		{
			if (player_num ==0)									// my Initial two Card
			{
				printf("   -> you        : ");
				printCard(CardTray[cardIndex]);
				cardSum[0] = getCardNum(CardTray[cardIndex]);
				cardhold[0][0] = CardTray[cardIndex];
				cardIndex ++;
				printCard(CardTray[cardIndex]);
				
				cardSum[0] += getCardNum(CardTray[cardIndex]);
				cardhold[0][1] = CardTray[cardIndex];
				
				cardIndex ++;
				printf("\n");
			}
			
			else 											// nth player's Initial two Card
			{
				printf("   -> player %d   : ");
				printCard(CardTray[cardIndex]);
				cardSum[player_num] = getCardNum(CardTray[cardIndex]);
				cardhold[player_num][0] = CardTray[cardIndex];
				cardIndex ++;		
				printCard(CardTray[cardIndex]);
				
				cardSum[player_num] += getCardNum(CardTray[cardIndex]);
				cardhold[n_user][1] = CardTray[cardIndex];
				cardIndex ++;
				printf("\n");
			}
			}
	
	}
	
