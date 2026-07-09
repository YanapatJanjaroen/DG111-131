#include <stdio.h>
int main()
{
    char name[50];
    int age;
    float gpa;
    char favorite_subject[50];

    // ENTER DATA
    printf("== Enter data ==\n");
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your favorite_subject: ");
    scanf("%49s", favorite_subject);

    // PERSONAL DATA
    printf("\n== Personal Data ==\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Favorite Subject: %s\n", favorite_subject);

    return 0;
}