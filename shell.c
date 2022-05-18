#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{

    int maxValue = 10;
    srand(time(NULL));
    int random = rand() % maxValue + 1;
    printf("Welcome, this is a guessing game.\nYou have three chances so use wisely from 1 - 10.\n");

    int val = printf("Your first guess is - ");
    scanf("%d", &val);

    if (val == random)
    {
        printf("Wow you got it on your first try.\n");
    }
    else
    {
        printf("Wrong, two attempts left. ");
        if (val >= random)
        {
            printf("Too high, go lower.\n");
        }
        else if (val <= random)
        {
            printf("Too low, go higher.\n");
        }
        int val = printf("Your second guess is - ");
        scanf("%d", &val);

        if (val == random)
        {
            printf("Well done you got it on your second try.\n");
        }
        else
        {
            printf("Wrong, one attempt left.\n");
            if (val >= random)
            {
                printf("Too high, go lower.\n");
            }
            else if (val <= random)
            {
                printf("Too low, go higher.\n");
            }
            int val = printf("Your last guess is - ");
            scanf("%d", &val);

            if (val == random)
            {
                printf("You almost missed it but you did it, it is %d.\n", random);
            }
            else
            {
                printf("Wrong again, that was your last chance.\nThe answer was %d.\n", random);
            }
        }
    }

    return (0);
} 
