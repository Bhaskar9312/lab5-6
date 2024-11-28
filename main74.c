#include <stdio.h>
void sort(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                int l = a[i];
                a[i] = a[j];
                a[j] = l;
            }

        }
    }
}
int main()
{
    int n1,n2;
    printf("Enter size of both arrays: ");
    scanf("%d%d",&n1,&n2);

    int a1[n1],a2[n2];
    printf("Array 1:\n");
    for(int i = 0;i<n1;i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d",&a1[i]);
    }

    printf("Array 2:\n");
     for(int i = 0;i<n2;i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d",&a2[i]);
    }

    int n = n1+n2;
    int c[n];
    for(int i = 0;i<n;i++)
    {
        if(i<n1)
        {
            c[i] = a1[i];
        }
        else 
        {
            c[i] = a2[i-n1];
        }
    }


    sort(c,n);
    for(int i = 0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}
