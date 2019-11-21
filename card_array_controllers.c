#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"


extern int CardTray[N_CARDSET*N_CARD];
extern int cardIndex;

//card array controllers (1) mix the card sets and put in the array	

int mixCardTray(void) {
	
	int tray_num;   //Card tray's number 0~51;
	int sub_tn;    // not to overlap card number (sub traynumber [sub_tn])
		
	srand((unsigned)time(NULL));
	
	for (tray_num=0;tray_num<N_CARD;tray_num++)
	{	
		CardTray[tray_num] = (rand()%52);
	
		for (sub_tn=0;sub_tn<tray_num;sub_tn++)
		{
			if (CardTray[tray_num] == CardTray[sub_tn])
				{
					tray_num--;
					break;
				}
		}
		
	}
	return 0; 
}

//card array controllers (2) get one card from the tray
int pullCard(void)
{	
	int card[52];
	card[cardIndex] = CardTray[cardIndex];
	cardIndex ++;
	return card[cardIndex];

	

}
