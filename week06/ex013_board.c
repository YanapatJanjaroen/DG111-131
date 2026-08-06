#include <stdio.h>

int main()
{
    int rows = 3;
    int cols = 5;
    int count = 1;
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("+---");
        }
        printf("+\n");
        for (j = 0; j < cols; j++)
        {
            printf("| %2d", count++);
        }
        printf("|\n");
    }
    for (j = 0; j < cols; j++)
    {
        printf("+---");
    }
    printf("+\n");
}