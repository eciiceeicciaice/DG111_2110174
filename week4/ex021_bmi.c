#include <stdio.h>

int main()
{
    printf("BMI Calculator\n");

    int weight, height;
    printf("Enter your weight (kg): ");
    scanf("%d", &weight);
    printf("Enter your height (cm): ");
    scanf("%d", &height);
    float height_in_meters = height / 100.0;
    float bmi = weight / (height_in_meters * height_in_meters);
    printf("Your BMI is: %.2f\n", bmi);

    int category;
    if (bmi < 18.5)
    {
        category = 1; // Underweight
        printf("You are underweight.\n");
    }
    if (bmi >= 18.5 && bmi < 24.9)

    {
        category = 2; // Normal weight
        printf("You have a normal weight.\n");
    }
    if (bmi >= 25 && bmi < 29.9)
    {
        category = 3; // Overweight
        printf("You are overweight.\n");
    }
    if (bmi >= 30)
    {
        category = 4; // Obesity
        printf("You are obese.\n");
    }

    return 0;
}
