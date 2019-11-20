#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

extern int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];

void printUserCardStatus(int user, int cardcnt) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}
