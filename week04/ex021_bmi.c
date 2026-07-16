#include <stdio.h>
int main()
{
    float kg, cm, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &kg);
    printf("Enter height in cm: ");
    scanf("%f", &cm);
    bmi = kg / (cm / 100 * cm / 100);
    printf("Output BMI: %.2f → ", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("Normal weight ✓\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obesity\n");
    }

    return 0;
}