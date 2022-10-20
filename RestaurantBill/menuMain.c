#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBill(double meal, double tax, double tip)
{
	float total;
    printf("\n**Bill**\n");
	printf("Meal Cost: %.2f", meal);
	printf("Tip Amount: %.2f", tip);
	printf("Tax Amount: %.2f", tax);
	
    total = meal + (tax/100)*meal + (tip/100)*meal; // calculate total
    printf("Total: %.2f", total);//print total
}
int main(int argc, char *argv[]) {

	// initiaize variable for random.
	time_t t;

	// create an array of menu items
	// 0 = salad, 1 = soup, 2 = sandwich, 3 = pizza
	double menuItems = {9.95, 4.55, 13.25, 22.35};
	double totalBill = 0.0;

	// take in command line arguements for tip, and tax percentages

    /* Init random number generator using time */
    srand((unsigned)time(&t));

    float meal,tax,tip; // declare 4 variables
    meal = rand() % 4; // take inputs
    tax = (argc/100)*meal;
	tip = (tip/100)*meal;

	printBill(meal, tax, tip);

	// call function to display [meal cost, tax amount, and total bill]
	// have a function to add the total bill including tip

    return EXIT_SUCCESS;
}