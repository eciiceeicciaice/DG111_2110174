#include <stdio.h>

int main()
{

    int day;
    printf("Enter a day of the week (1-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        printf("Weekday🥹\n");
        break;
    case 2:
        printf("Tuesday\n");
        printf("Weekday🥹\n");
        break;
    case 3:
        printf("Wednesday\n");
        printf("Weekday🥹\n");
        break;
    case 4:
        printf("Thursday\n");
        printf("Weekday🥹\n");
        break;
    case 5:
        printf("Friday\n");
        printf("Weekday🥹\n");
        break;
    case 6:
        printf("Saturday\n");
        printf("Weekend!!!🥳\n");
        break;
    case 7:
        printf("Sunday\n");
        printf("Weekend!!!🥳\n");
        break;
    default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}