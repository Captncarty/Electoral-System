#ifndef ELECT_H
#define ELECT_H

#include <stdio.h>
#include <stdlib.h>
/*==================*/
/*      MACROS      */
/*==================*/
#define CANDIDATE_COUNT

#define CANDIDATE1 "Peter Obi"
#define CANDIDATE2 "Bola Tinibu"
#define CANDIDATE3 "Atiku Abubakar"
#define CANDIDATE4 "Omoyele Sowore"

/*==================*/
/*  MAIN FUNCTIONS  */
/*==================*/
void castVote(void);
void votesCount(void);
void getLeadingCandidate(void);

#endif  /* ELECT_H */
