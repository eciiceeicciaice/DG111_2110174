#include <stdio.h>
// Triangle pattern
int main()
{
    printf(" 𝖙𝖗𝖎𝖆𝖓𝖌𝖑𝖊\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("⭐");
        }
        printf("\n");
    }
    printf("𝖘𝖖𝖚𝖆𝖗𝖊\n");
    // Square pattern
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("⭐");
        }
        printf("\n");
    }
    printf(" 𝖉𝖎𝖆𝖒𝖔𝖓𝖉\n");
    // Diamond pattern
    int m = 3;

    // ครึ่งบน
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < m - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // ครึ่งล่าง
    for (int i = m - 1; i >= 1; i--)
    {
        for (int j = 0; j < m - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}