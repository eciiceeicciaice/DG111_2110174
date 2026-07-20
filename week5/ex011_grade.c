#include <stdio.h>

int main()
{
    printf("Grade Letter and Grade Point\n");

    int score;
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("Your grade is: A (4.0)\n");
    }
    else if (score >= 75)
    {
        printf("Your grade is: B+ (3.5)\n");
    }
    else if (score >= 70)
    {
        printf("Your grade is: B (3.0)\n");
    }
    else if (score >= 65)
    {
        printf("Your grade is: C+ (2.5)\n");
    }
    else if (score >= 60)
    {
        printf("Your grade is: C (2.0)\n");
    }
    else if (score >= 55)
    {
        printf("Your grade is: D+ (1.5)\n");
    }
    else if (score >= 50)
    {
        printf("Your grade is: D (1.0)\n");
    }
    else if (score <= 49)
    {
        printf("Your grade is: F (0.0)\n");
    }

    printf("Score: %d\n", score);

    if (score >= 50)
    {
        printf("You passed the course.\n");
    }
    else
    {
        printf("You failed the course.\n");
    }
    return 0;
}