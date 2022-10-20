#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameOptions.h"

int max = 10;

void play(void)
{
	int guess = 1;
	time_t t;

	srand((unsigned)time(&t));

	int randNum = rand() % max + 1;

	while (guess != 0)
	{

		printf("Enter a guess: \n");
		scanf("%d", &guess);

		// if the guessed number is greater than the random generated number
		if (guess > randNum)
			printf("You are too high\n");
		// if the guessed number is greater than the random generated number
		else if (guess < randNum)
			printf("You are too low\n");
		else
		{
			printf("You have guessed the correct number\n");
			break;
		}
	}

	void setMaxNum(void)
	{
		printf("Enter new max number: ");
		scanf("%d", &max);
	}

	void exitFunc(void)
	{
		printf("Thank you for Playing!");
		exit(0);
	}
