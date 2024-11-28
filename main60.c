// SELECTION SORT
#include <stdio.h>
void sort(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        int min = i;
        for(int j = i+1;j<n;j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }

            int x = array[min];
            array[min] = array[i];
            array[i] = x;
        }
    }
}    

void print(int array[],int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}


int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Sorted array: \n");
    sort(arr,n);
    print(arr,n);

    return 0;
}
