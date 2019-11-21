#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

//offering initial 2 cards

extern int n_user;
extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];
void offerCards(void) {
	int i;
	
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
		
	}
	//2. give two card for the operator (server)
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	

	return;
}
