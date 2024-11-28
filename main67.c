#include <stdio.h>
int main()
{
    int mat1[3][3],mat2[3][3],diff[3][3];

    printf("For matrix1: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("For matrix2: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }    

    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("|%d|",mat1[i][j]);
        }    
            
    printf("  -  ");

        for(int j=0; j<3; j++)
        {
            printf("|%d|",mat2[i][j]);
        }    
            
    printf("  =  ");

        for(int j=0; j<3; j++)
        {
            printf("|%d|",diff[i][j]);
        }    
            printf("\n");
    } 
}
