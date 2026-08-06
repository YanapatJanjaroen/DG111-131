#include <stdio.h>

int main()

{
    // 1
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    // 2
    i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    // 3
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("Sum: %d\n", sum);

    return 0;
}
