#include <stdio.h>
int main()
{
    char name[50];
    int age;
    float gpa;
    char major[50];

    // ENTER DATA
    printf("== Enter data ==\n");
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your major: ");
    scanf("%49s", major);

    // PERSONAL DATA
    printf("     == PERSONAL CARD ==  \n");
    printf("┌─────────────────────────────┐\n");
    printf("│Name: %s                    │\n", name);
    printf("│Age: %d                      │\n", age);
    printf("│GPA: %.2f                    │\n", gpa);
    printf("│Major: %s                    │\n", major);
    printf("└─────────────────────────────┘\n");
    return 0;
}