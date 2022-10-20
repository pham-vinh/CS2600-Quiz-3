#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameOptions.h"



void play(int number)
{
	int guess = 0;
	time_t t;

	srand((unsigned)time(&t));

	int max = number;
	int number = rand() % number + 1;
	while (guess != 'q') {
		printf("");
	}
}

void setMaxNum(int number)
{
	ANNOUNCE("Set Max Number");
}

void exitFunc(void)
{
	ANNOUNCE("Exiting Game");
}