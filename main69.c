#include <stdio.h>
int main()
{
    int n,search,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int array[n];
    for(i = 0;i<n;i++)
    {
        printf("Enter element[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&search);
    for(i = 0;i<n;i++)
    {
        if(search == array[i])
        {
            printf("Element found at location: %d",i+1);
            break;
        
        }
    }
    if(i == n)
    {
        printf("Element not found");     
    }
        
        
    
}
