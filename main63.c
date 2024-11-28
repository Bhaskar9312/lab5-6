#include <stdio.h>
int main()
{
    int a[3][3],max,min;
    printf("Enter the elements of the matrix: \n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]>max)
            { max = a[i][j];}

            else if(a[i][j]<min)
            { min = a[i][j];}
        }
    }

    printf("Maximum element: %d\n",max);
    printf("Minimum element: %d\n",min);

} 
