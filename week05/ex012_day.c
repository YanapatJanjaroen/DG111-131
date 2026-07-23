#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday (weekday)\n");
        break;
    case 2:
        printf("Tuesday (weekday)\n");
        break;
    case 3:
        printf("Wednesday (weekday)\n");
        break;
    case 4:
        printf("Thursday (weekday)\n");
        break;
    case 5:
        printf("Friday (weekday)\n");
        break;
    case 6:
        printf("Saturday (Weekend!)\n");
        break;
    case 7:
        printf("Sunday (Weekend!)\n");
        break;
    default:
        printf("Invalid input\n");
    }

    return 0;
}