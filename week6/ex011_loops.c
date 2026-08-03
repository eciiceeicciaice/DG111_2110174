#include <stdio.h>

int main()
{
    // for loop)
    int i = 1;
    int sum = 0;
    printf("For loop:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum %d\n", sum);

    // while loop
    printf("While loop:\n");
    int j = 1;
    int sum2 = 0;
    for (int j = 1; j <= 10; j++)
    {
        printf("%d\n", j);
        sum2 += j;
    }
    printf("Sum %d\n", sum2);
    // do-while loop
    int k = 1;
    int sum3 = 0;
    printf("Do-while loop:\n");
    for (int k = 1; k <= 10; k++)
    {
        printf("%d\n", k);
        sum3 += k;
    }
    printf("Sum %d\n", sum3);

    return 0;
}