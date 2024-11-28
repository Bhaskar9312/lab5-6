#include <stdio.h>
int main()
{
    int array1[10];
    int array2[10];

    printf("For array1: \n");
    for(int i=0; i<10; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("For array2: \n");
    for(int i=0; i<10; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    int array3[10];
    for(int i=0; i<10; i++)
    {
        array3[i] = array1[i];
        array1[i] = array2[i];
        array2[i] = array3[i];
    }

    printf("Swapped Array1: \n");
    for(int i=0; i<10; i++)
    {    printf("|%d|", array1[i]);}

    printf("Swapped Array2: \n");
    for(int i=0; i<10; i++){
    printf("|%d|",array2[i]);}


}
