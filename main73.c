#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of ballots to be counted: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0;i<n;i++)
    {
        printf("Enter the ballot[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int c1=0,c2=0,c3=0,c4=0,c5=0,sp=0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            c1++;
        }
        else if(arr[i] == 2)
        {
            c2++;
        }
        else if(arr[i] == 3)
        {
            c3++;
        }
        else if(arr[i] == 4)
        {
            c4++;
        }
        else if(arr[i] == 5)
        {
            c5++;
        }
        else
        {
            sp++;
        }
    }

    printf("Candidate 1: %d\n",c1);
    printf("Candidate 2: %d\n",c2);
    printf("Candidate 3: %d\n",c3);
    printf("Candidate 4: %d\n",c4);
    printf("Candidate 5: %d\n",c5);
    printf("Spoilt Ballet: %d",sp);
}
