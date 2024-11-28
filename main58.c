#include <stdio.h>
int main()
{
    int array1[10],i;

    printf("For array1: \n");

    for(i=0; i<10; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    int array2[10];

    printf("For array2: \n");

    for(i=0; i<10; i++)
    {    
        printf("Enter element[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    int array3[10];
    for(i=0; i<10; i++)
    {
        array3[i] = array1[i] + array2[i]; 
    }

    for(i=0; i<10; i++)
    {
        printf("|%d|",array3[i]);
    }

}
