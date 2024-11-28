#include <stdio.h>
int main()
{
    int array[10],sum=0;
    for(int i = 0;i < 10;i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d",&array[i]);    
    }

    for(int i = 0;i < 10;i++)
    { 
        sum += array[i];
    }

    printf("Sum = %d",sum);
}
