#ifndef ELECT_H
#define ELECT_H

#include<stdio.h>

/*==================*/
/*      MACROS      */
/*==================*/
#define CANDIDATE_COUNT

#define CANDIDATE1 "Peter Obi"
#define CANDIDATE2 "Bola Tinibu"
#define CANDIDATE3 "Atiku Abubakar"
#define CANDIDATE4 "Omoyele Sowore"

/*==================*/
/* Global Variables */
/*==================*/
int votesCount1=0, 
	votesCount2=0, 
	votesCount3=0, 
	votesCount4=0, 
	spoiledtvotes=0;

/*==================*/
/*  MAIN FUNCTIONS  */
/*==================*/
void castVote(void);
void votesCount(void);
void getLeadingCandidate(void);

#endif  /* ELECT_H */
