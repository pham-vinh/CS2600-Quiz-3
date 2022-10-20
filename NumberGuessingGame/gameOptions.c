#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameOptions.h"

 int max = 10;


void play(void)
{
	int guess = 0;
	time_t t;

	srand((unsigned)time(&t));
	
	int answer = rand() % max + 1;
	while (guess != 'q') {
		printf("");
	}
}

void setMaxNum(void)
{
	
}

void exitFunc(void)
{
	printf("Thank you for Playing!");
	exit(0);
}