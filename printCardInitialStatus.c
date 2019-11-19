#include "headerbj.h"

//print initial card status

extern int CardTray[N_CARDSET*N_CARD];
extern int player_num;
extern n_user;
extern cardIndex;
extern CardSum[N_MAX_USER];

void printCardInitialStatus(void) {
	
	printf("\n ----------- CARD OFFERING ------------\n");
	
			printf("   -> server     : ");
			printf("X ");
			CardSum[n_user] = CardTray[cardIndex];
			cardIndex ++;
			printCard(CardTray[cardIndex]);
			printf("\n");
			CardSum[n_user] += CardTray[cardIndex];
			cardIndex ++;

		
	for(player_num=0; player_num<n_user; player_num++)	
		{
			if (player_num ==0)
			{
				printf("   -> you        : ");
				printCard(CardTray[cardIndex]);
				CardSum[0] = CardTray[cardIndex];
				cardIndex ++;
				printCard(CardTray[cardIndex]);
				CardSum[0] += CardTray[cardIndex];
				cardIndex ++;
				printf("\n");
			}
			
			else 
			{
				printf("   -> player %d   : ");
				printCard(CardTray[cardIndex]);
				CardSum[player_num] = CardTray[cardIndex];
				cardIndex ++;		
				printCard(CardTray[cardIndex]);
				CardSum[player_num] += CardTray[cardIndex];
				cardIndex ++;
				printf("\n");
			}
			}
	
	}
	
