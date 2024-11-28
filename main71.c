#include <stdio.h>
int pivot(int arr[],int left,int right)
{
    if (right < left) return -1;
    if(right == left) return left;

    int mid = (left + right)/2;

    if(mid < right && arr[mid] > arr[mid+1])
        return mid;

    if(mid > left && arr[mid] < arr[mid-1])
        return mid-1;

    if(arr[left] >= arr[mid])
        return pivot(arr,left,mid-1);

    return pivot(arr,mid+1,right);   
}

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the sorted and rotated array: \n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int piv = pivot(a,0,n-1);
    
    if(piv != -1)
    {
        printf("Pivot element is: %d",a[piv]);
    }
    else
    {
        printf("No pivot element"); 
    }
}
