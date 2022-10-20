
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to print the square
void printSquare(int square[3][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",square[i][j]);
        }
        printf("\n");
    }
}

// function to fill the square with random numbers using time

// function to check if it is a magic square
int isMagicSquare()
{

    return 0;
}

int main()
{

    // initiate a 2 x 2.. 2d array
    int magicSquare[3][3];
    int count = 0;

    // do while loop while the function magic square is not true
    do
    {
        count++;
        int used[10] = {0};
        srand(time(0) + count); // Changing seed , so that we get new values each time
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int n = rand() % 9 + 1;
                while (used[n])
                {
                    n = rand() % 9 + 1;
                }
                magicSquare[i][j] = n;
                used[n] = 1;
            }
        }
    } while (isMagicSquare() != 1);

    // have a counter for the number of squares generated
    printf("No. of squares generated : %d \n",count);

    // at the end print the grid
    printSquare(magicSquare);
    
    return EXIT_SUCCESS;
}