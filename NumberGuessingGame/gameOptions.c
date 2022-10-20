#include <stdio.h>
#include "gameOptions.h"

#define ANNOUNCE(x) printf("In the functions %s\n", x) // This is a macro

void play(void)
{
	ANNOUNCE("Starting Game");
}

void setMaxNum(void)
{
	ANNOUNCE("Set Max Number");
}

void exitFunc(void)
{
	ANNOUNCE("Exiting Game");
}