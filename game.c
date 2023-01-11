#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool game()
{

    srand(time(0));

    int thenum = (rand() % 100) + 1;
    int trys = 0;

    printf("----------Number Guessing Game----------\n");
    printf("Type 0 at any time to quit!\n");
    printf("----------------------------------------\n");

    while (true)
    {

        int usernum;

        printf("Enter a number (1 - 100): ");
        scanf("%d", &usernum);

        if (usernum == thenum)
        {

            printf("You win!\n");
            printf("It took you %d trys!\n", trys);
            return true;

        }
        else if (usernum == 0)
        {

            printf("The number was %d! :(\n", thenum);
            printf("You had was %d trys!\n", trys);
            return false;

        }
        else
        {

            if (usernum > thenum)
            {

                printf("Lower!\n");
                
            }

            if (usernum < thenum)
            {

                printf("Higher!\n");


            }
        }

        trys += 1;

    }

}

int main()
{

    while (game())
    {

        int aws;

        printf("\nDo you want to play again? (1 for yse and 0 for no): ");
        scanf("%d", &aws);


        if (aws <= 0)
        {

            break;

        }


    }

    printf("Goodbye!\n");

    return 0;

}
