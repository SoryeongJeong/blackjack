#include "headerbj.h"


//playing game functions (1) player setting-----------------------------

extern int user;
int configUser(void){
		
		int n_user;
		
		do
	{
		printf("input the number of players (MAX 5) : ");
		n_user = getIntegerInput(); 
		if (n_user <= 0)
			{
				printf("invalid input players (%d)\n",n_user);
			}
		else if (n_user > N_MAX_USER)
			{
				printf("Too many players!\n");
			}
	}while((n_user <= 0) || (n_user > N_MAX_USER));
	
	printf("--> card is mixed and put into the tray\n");
}

