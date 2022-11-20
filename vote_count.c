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

/**
  * getLeadingCandidate - process result
  * Returns: result, Winner or a Warning
  */

void getLeadingCandidate(void)
{
	printf("\n\n  #### Leading Candiate ####\n\n");

	if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
		printf("[%s]", CANDIDATE1);

	else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
		printf("[%s]", CANDIDATE2);

	else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
		printf("[%s]", CANDIDATE3);

	else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
		printf("[%s]", CANDIDATE4);

	else
		printf("----- Warning !!! No-win situation----");
}

