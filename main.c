#include "elect.h"

/**
  * main - Point of Entry
  * Return: Always 0 (success)
  */

int main(void)
{
	int i;
	int choice;

	system("tput setaf 34");
	system("clear");

	do {
		printf("\n\n ###### Welcome to Election/Voting 2022 ######");
		//system("clear");
		printf("\n\n 1. Cast the Vote");
		printf("\n 2. Find Vote Count");
		printf("\n 3. Find leading Candidate");
		printf("\n 0. Exit");
		

		printf("\n\n Please enter your choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				castVote();
				break;

			case 2:
				votesCount();
				break;

			case 3:
				getLeadingCandidate();
				break;

			default:
				printf("\n Come again soon! \n");
		}
	}

	while (choice != 0);

	getchar();

	return (0);
}

