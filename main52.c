#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number of rows: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) 
    {
        for(int j = 1; j <= x-i; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }

        for(int l = i-1;l > 0; l--)
        {
            printf("%d",l);
        }

        printf("\n");
    }
}
