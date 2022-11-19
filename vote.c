#include "elect.h"

/**
  * castVote - place your vote
  * Return: preferred candidate choice
  */

void castVote(void)
{
	int choice;

	printf("\n\n ### Please choose your Candidate ####\n\n");
	printf("\n 1. %s", CANDIDATE1);
	printf("\n 2. %s", CANDIDATE2);
	printf("\n 3. %s", CANDIDATE3);
	printf("\n 4. %s", CANDIDATE4);
	printf("\n 5. %s", "None of These");

	printf("\n\n Input your choice (1 - 4) : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: votesCount1++;
				break;
		case 2: votesCount2++;
				break;
		case 3: votesCount3++;
				break;
		case 4: votesCount4++;
				break;
		case 5: spoiledtvotes++;
				break;
		default: printf("\n Error: Wrong Choice !! Please retry");
				 getchar();
	}
	printf("\n thanks for vote !!");
}

