#include <stdio.h>

int main()
{

    for (int i = 1; i <= 9; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if (i == j && i % 2 != 0 && i % 2 = 0)
            {
                printf("*");
            }
            else if (i != j || i % 2 != 0)
            {
                printf(" ");
            }
          
        }
        printf("\n");
    }

    return 0;
}