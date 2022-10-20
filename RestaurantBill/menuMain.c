#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBill(double meal, double tax, double tip)
{
	float total;
    printf("\n-------Bill-------\n");
	printf("Meal Cost: $%.2f\n", meal);
	printf("Tip Amount: $%.2f\n", tip);
	printf("Tax Amount: $%.2f\n", tax);
	
    total = meal + tax + tip; // calculate total
    printf("Total Bill: $%.2f\n", total);//print total
}
int main(int argc, char *argv[]) {

	// initiaize variable for random.
	time_t t;
	char *ptr;
	// create an array of menu items
	// 0 = salad, 1 = soup, 2 = sandwich, 3 = pizza
	double menuItems[] = {9.95, 4.55, 13.25, 22.35};
	const char *menuName[] = {"Salad", "Soup", "Sandwich", "Pizza"};
	// take in command line arguements for tip, and tax percentages

    /* Init random number generator using time */
    srand((unsigned)time(&t));

    double meal,tax,tip; // declare 3 variables
	int random = rand() % 4;
    meal = menuItems[random];
	printf("\nMeal Chosen: %s $%.2f\n", menuName[random], menuItems[random]);
	tip = ((double)strtod(argv[2], &ptr)/100.0)*meal; // calculate tip amount
    tax = ((double)strtod(argv[1], &ptr)/100.0)*meal; // calculate tax amount

	// call function to display [meal cost, tax amount, and total bill]
	// have a function to add the total bill including tip
	printBill(meal, tax, tip);

    return EXIT_SUCCESS;
}