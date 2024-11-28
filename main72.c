#include <stdio.h>
void rot(int a[],int n)
{
    int l = a[0];
    for(int i = 0;i<n-1;i++)
    {
       a[i] = a[i+1];
    }
    a[n-1] = l;

}

void rotate(int a[],int n,int d)
{
    for(int i = 1;i<=d;i++)
    {
        rot(a,n);
    }
    
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

int main()
{
    int n,d;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the positions to be rotated: ");
    scanf("%d",&d);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
    printf("Enter element [%d]: ",i);
    scanf("%d",&arr[i]);
    }

    rotate(arr,n,d);
}
