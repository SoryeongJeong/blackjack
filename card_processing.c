#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

//card processing functions ---------------

//1. calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
		int Card[52];
		if((cardnum%13 == 10 )|| (cardnum%13 == 11 )|| (cardnum%13 == 12))
		{	
			Card[cardnum] = 10;
			return Card[cardnum];
		}
		
		else
		{
			Card[cardnum] = (cardnum%13) + 1;
			return Card[cardnum];
		}
}


//2. print the card information (e.g. DiaA)
void printCard(int cardnum) {
	
	
	// card shape (Hart, Dia, Spade, Club)  
	if ((cardnum/13) == 0)
		{
			printf("Hart");
		}
	else if ((cardnum/13)==1)
		{
			printf("Dia");
		}
	else if ((cardnum/13)==2)
		{
			printf("Spade");
		}
	else 
		{
			printf("Club");
		}
	
	// Card number (A,2,3,4,5,6,7,8,9,10,J,Q,K)
		if((cardnum%13) == 10 )
		{	
			printf("Jack ");
		}
		else if ((cardnum%13)==11)
		{
			printf("Queen ");
		}
		else if ((cardnum%13)==12)
		{
			printf("King ");
		}
		else if ((cardnum%13)==0)
		{
			printf("A ");
		}
			
		else
		{
			printf("%d ", (cardnum%13)+1);
		}
}
		
