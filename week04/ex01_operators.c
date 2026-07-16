#include <stdio.h>
int main()
{
    // 1.1
    printf("1. Expression : 10/3 = %d\n", 10 / 3);
    printf("2. Expression : 10.0/3 = %f\n", 10.0 / 3);
    printf("3. Expression : (float)10/3 = %f\n", (float)10 / 3);
    printf("4. Expression : 10 % 3 = %d\n", 10 % 3);
    printf("5. Expression : -7 % 3 = %d\n", -7 % 3);
    printf("6. Expression : 7 % -3 = %d\n", 7 % -3);

    int expression = 10 / 3;
    printf("2. Expression_1 : 10/3 = %d\n", expression);

    float expression_2 = 10 / 3;
    printf("3. Expression_2 : 10/3 = %f\n", expression_2);

    // 1.2
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    // 1.3
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);

    return 0;
}
