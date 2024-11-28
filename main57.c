#include <stdio.h>
int main()
{
    int n,max1,max2;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    if(n<2)
    {printf("Enter atleast 2 elements");
    return 1;}

    
    int array[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d",&array[i]);
    
    }
    
    if(array[0]>array[1])
    {
        max1 = array[0];
        max2 = array[1];
    }
    else if(array[0]<array[1])
    {
        max1 = array[1];
        max2 = array[0];
    }
    else if(array[0]==array[1])
    {   max1 = array[1];
        max2 = array[2];
    }

    for(int i = 2; i<n; i++)
    {
        if(array[i]>max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if(array[i]>max2 && array[i] != max1)
        {
            max2 = array[i];
        }
 
    }

    

    printf("The largest element is: %d\n",max1);
    printf("The second largest element is: %d\n",max2);

    return 0;

}
