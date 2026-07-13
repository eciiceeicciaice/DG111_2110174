#include <stdio.h>

int main(void)
{
    int total_seconds, hours, minutes, seconds;
    printf("input total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%d output: %d hours, %d minutes, %d seconds\n",
           total_seconds, hours, minutes, seconds);

    return 0;
}
