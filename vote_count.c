#include "elect.h"

/**
  * votesCount - tallies votes
  * Returns: total number of votes respectfully
  */

void votesCount(void)
{
	printf("\n\n ##### Voting Statistics #####");
	printf("\n %s - %d ", CANDIDATE1, votesCount1);
	printf("\n %s - %d ", CANDIDATE1, votesCount2);
	printf("\n %s - %d ", CANDIDATE1, votesCount3);
	printf("\n %s - %d ", CANDIDATE1, votesCount4);
	printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

