#include "headerbj.h"

extern int cardIndex;
extern int CardSum[N_MAX_USER];
extern int player_num;
int CardTray[N_CARDSET*N_CARD];

int getAction(void) {
		 
	int answer;
	

	
		if (player_num == 0)
		{
			do
			{	printf("Action? (0 - go, others - stay) : ");
				answer = getIntegerInput();
				if (answer == 0)
				{	
						cardIndex++;
						CardSum[0] += CardTray[cardIndex];
				}
			}while(CardSum[0]<21);
		}
		
		else if (player_num > 0)
		{	
			do
			{	printf("Action? (0 - go, others - stay) ");
				if (CardSum[player_num] < 17)
				{
					printf("   GO!\n");		
					cardIndex++;
					CardSum[player_num] += CardTray[cardIndex];
				}
				else
				{
					printf("   STAY!\n");
				}
			}while(CardSum[player_num]<21);
		}
	}
