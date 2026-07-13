#include <stdio.h>

int main()
{
    printf("1. Expression: 10 / 3 = %d\n", 10 / 3);

    int expression_1 = 10 / 3;
    printf("2. Expression_1: %d\n", expression_1);

    float expression_2 = 10 / 3;
    printf("3. Expression_2: %.2f\n", expression_2);

    int expression_3 = 10 % 3;
    printf("4. Expression_3: %d\n", expression_3);

    int expression_4 = -7 % 3;
    printf("5. Expression_4: %d\n", expression_4);

    int expression_5 = 7 % -3;
    printf("6. Expression_5: %d\n", expression_5);

    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    int expression_6 = 2 + 3 * 4;
    printf("7. Expression_6: 2+3*4 = %d\n", 2 + 3 * 4, expression_6);
    int expression_7 = (2 + 3) * 4;
    printf("8. Expression_7:(2+3)*4 = %d\n", (2 + 3) * 4, expression_7);
    int expression_8 = 10 - 2 - 3;
    printf("9. Expression_8:10-2-3 = %d\n", 10 - 2 - 3, expression_8);
    int expression_9 = 2 * 3 + 4 * 5;
    printf("10. Expression_9: 2*3+4*5 = %d\n", 2 * 3 + 4 * 5, expression_9);

    return 0;
}