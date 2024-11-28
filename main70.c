#include <stdio.h>
int main()
{
    int n,occur,count=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int array[n];

    for(int i = 0; i<n; i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d",&array[i]);
    }

    printf("Enter the element to find occurrence: ");
    scanf("%d",&occur);

    for(int i = 0;i<n;i++)
    {
        if(array[i] == occur)
        {
            count++;
        }
    }

    if(count < 1)
    {
        printf("The element didn't occur.");
    }
    else
    {
        printf("The element has occurred: %d times",count);
    }
}
