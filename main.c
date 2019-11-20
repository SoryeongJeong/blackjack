#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "headerbj.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;	

//player info
int n_user;                       				    	//number of users
int dollar[N_MAX_USER];	          					  //dollars that each player has
int player_num;                   				 	 // nth player (server's player num = n_user, my player_num = 0)

//play yard information
int bet[N_MAX_USER];            			  		 //current betting 
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];			//cards that currently the players hold
int cardSum[N_MAX_USER];							//sum of the cards
int gameEnd = 0; 									//game end flag

//get an integer input from standard input (keyboard)
//return : input integer value
//         (-1 is returned if keyboard input was not integer)
int getIntegerInput(void) {
    int input, num;
    
    num = scanf("%d", &input);
    fflush(stdin);
    if (num != 1) //if it fails to get integer
        input = -1;
    
    return input;
}

int main(int argc, char *argv[]) {
	
	int roundIndex = 0;
	int i;
	int cardcnt;
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();
	
	//Game initialization --------
	//1. players' dollar
	
	//2. card tray
	mixCardTray();
	
		//Game start --------
	do {
		printf("\n--------------------------------------------------\n");
		printf("--------------ROUND %d (cardIndex : %d)-------------\n",roundIndex+1, cardIndex);
		printf("----------------------------------------------------\n");
		
		betDollar();
		printCardInitialStatus();
		
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for (player_num=0; player_num <n_user;player_num++) //each player
		{
			cardcnt =2;
			//check if the turn ends or not
			if (player_num == 0 )
			{
				printf(">>> my turn! ------------\n");
			}
			else if(player_num = n_user)
			{
				printf(">>> server turn! ---------\n");
			}
			else
			{
				printf(">>> player %d turn! -----\n", player_num);
			}
			
			while (i==player_num) //do until the player dies or player says stop
			{
				printUserCardStatus(i,cardcnt);  //print current card status 
				getAction();							//GO? STOP? ::: 
				calcStepResult();						//check the card status ::: 
				
				
				//check if the turn ends or not
			}
			
										
		}
		roundIndex++;
		cardcnt ++;
		//result
		
		checkResult();
		} while (gameEnd == 0);
		
			
	checkWinner();
	
	
	return 0;
}
