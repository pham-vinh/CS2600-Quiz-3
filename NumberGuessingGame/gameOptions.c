#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameOptions.h"
#include "promptMenu.c"

int max = 10;

int play(void)
{
	int guess = 0;
	time_t t;

	srand((unsigned)time(&t));

	int answer = rand() % max + 1;

	while (guess != 'q')
	{
		printf("Enter a guess: ");
		scanf("%d", guess);
	}
}

int setMaxNum(void)
{
	printf("Enter new max number: ");
	scanf("%d", max);
	menuDisplay();
}

int exitFunc(void)
{
	printf("Thank you for Playing!");
	exit(0);
}