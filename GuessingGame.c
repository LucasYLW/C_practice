#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int maxValue = 5;
    int randomNumber;
    int input;
    srand(time(NULL));

    while (input != randomNumber)
    {
        randomNumber = rand() % maxValue+1;
        //printf("%d\n", randomNumber);

        printf("Guess a number 0-%d:", maxValue);

        
        scanf("%d",&input);

        if (input == randomNumber)
        {
            printf("You win, your number is %i, and the lucky number is %i\n",input,randomNumber);
        }else
        {
            printf("Try again! Your number is %i, but the lucky number is %i\n",input, randomNumber);
        }
    }

}