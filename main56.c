#include <stdio.h>
int main()
{
    int array[10],p=0,n=0,z=0;
    for(int i=0; i<10; i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(array[i] > 0)
        { p++;}
        else if(array[i] < 0)
        { n++;}
        else
        { z++;}
    }

    printf("Number of positive elements: %d\n",p);
    printf("Number of negative elements: %d\n",n);
    printf("Number of zero elements: %d\n",z);
}
