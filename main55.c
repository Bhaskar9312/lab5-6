#include <stdio.h>
int main()
{
    int array[10],even=0,odd=0;
    for(int i=0; i<10; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
        printf("Number of even elements: %d\n", even);
        printf("Number of odd elements: %d\n", odd);
}
