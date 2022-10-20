#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gameOptions.h"


// using header to make menu options
// displaying game options in promptMenu.c that uses gameOptions.c
//

// constant array of const strings. The String values can not be updated and no new entries are permitted
const char *const menuEntries[] = {"Play Game", "Change Max Number", "Quit"};

// array of Ptrs, pointing to functions - This is a complex data type
void (*menuFuncPtrs[])(void) = {play, setMaxNum, exitFunc};

void menuDisp()
{
	void menuProcess(int, const char *const[], void (*[])(void));
	// Dynamic changes with the array
	const int choices = sizeof(menuFuncPtrs) / sizeof(menuFuncPtrs[0]);
	menuProcess(choices, menuEntries, menuFuncPtrs);
}





int main()
{
	int true = 1;
	do {
		menuDisp();
	} while (true == 1);
	
	return EXIT_SUCCESS;
}