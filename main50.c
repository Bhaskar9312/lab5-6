#include <stdio.h>
int main()
{
    int cols;
    printf("Enter the number of columns: ");
    scanf("%d",&cols);

    for(int i = 1;i <= cols;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            printf("%c",'A'+i-1);
        }
            printf("\n");
    }
}
