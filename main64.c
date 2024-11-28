#include <stdio.h>
int main()
{
    int mat[3][3], sum=0;

    printf("Enter the matrix elements: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter the element [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int i = 0;i <3;i++)
    {
        for(int j = 0;j<3; j++)
        {
            sum += mat[i][j];
        }

        printf("Sum of row %d = %d\n",i+1,sum);
    }

}
