#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void guess(int N)
{
    int num,guess,numofguess=0;
    srand(time(NULL));

    num = rand() % N;
    
    printf("You've only 10 chances\n");
    printf("Guess a number between 1 and %d\n",N);

    do
    {
        if (numofguess > 10)
        {
            printf("You loose!\n");
            printf("The Number is : %d",num);
            break;
        }

        scanf("%d",&guess);

        if(guess > num)
        {
            printf("Lower number please!\n");
            numofguess++;
        }
        else if(num > guess)
        {
            printf("Higher number please!\n");
            numofguess++;
        }

        else 
        {
            printf("You guessed the number in %d attempts! \n",numofguess);
        }
    }

    while(guess != num);
}

int main()
{
    int N = 100;
    guess(N);

    return 0;
}
