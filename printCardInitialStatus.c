#include "headerbj.h"

//print initial card status

extern int CardTray[N_CARDSET*N_CARD];
extern int player_num;
extern n_user;
extern cardIndex;

void printCardInitialStatus(void) {
	
	printf("\n ----------- CARD OFFERING ------------\n");
	
			printf("   -> server     : ");
			printf("X ");
			cardIndex ++;
			printCard(CardTray[cardIndex]);
			printf("\n");
			cardIndex ++;
		
	for(player_num=0; player_num<n_user; player_num++)	
		{
			if (player_num ==0)
			{
				printf("   -> you        : ");
				printCard(CardTray[cardIndex]);
				cardIndex ++;
				printCard(CardTray[cardIndex]);
				cardIndex ++;
				printf("\n");
			}
			
			else 
			{
				printf("   -> player %d   : ");
				printCard(CardTray[cardIndex]);
				cardIndex ++;		
				printCard(CardTray[cardIndex]);
				cardIndex ++;
				printf("\n");
			}
			}
	
	}
	
