#include <stdio.h>
#define MAX_LEN 200
// 2.1: Word Counter
int wordCount(const char *str)
{
    int count = 0, inWord = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char text[MAX_LEN];
    printf("Enter text (spaces allowed): ");
    fgets(text, MAX_LEN, stdin);
    // fgets keeps the trailing '\n' — find the null terminator manually
    // and overwrite the newline with '\0' if it's there (no need to check for EOF)
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '\n')
        {
            text[i] = '\0';
            break;
        }
    }
    int count = wordCount(text);
    printf("Word count: %d\n", count);
    return 0;
}