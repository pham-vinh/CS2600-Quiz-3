#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameOptions.h"

int max_number = 10;

void play(void)
{
	char character[2];
	int guess;
	time_t t;

	srand((unsigned)time(&t));

	// random number between 1 and the max number
	int randNum = rand() % max_number + 1;
	printf("%d\n", randNum);

	do
	{
		printf("Enter a guess: \n");
		scanf("%s", &character);
		// when user enters q it quits the game
		if (character[0] == 'q')
			break;
		else
			guess = atoi(character);

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
	} while (character[0] != 'q' || randNum == guess);
}

void setMaxNum(void)
{
	int max = 0;
	do
	{
		scanf("%d", &max);
		// if the new maximum number is not between 0 to 10
		if (max <= 0 || max > 10)
			printf("Please enter a valid number \n");
		// if the new number is valid assign it to our global variable
		else
			max_number = max;
	} while (max <= 0 || max > 10);
}

void exitFunc(void)
{
	printf("Thank you for Playing!");
	exit(0);
}
