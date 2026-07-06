#include <stdio.h>

int main()
{

    char name[100] = "Eci";
    float GPA = 4.67f;
    int age = 67;
    char favorite_subject[50] = "3D";

    // ป้อนข้อมูล
    printf("\n===ป้อนข้อมูล===\n");
    printf("name : %s\n", name, sizeof(name));
    printf("age : %d\n", age, sizeof(age));
    printf("GPA : %.2f\n", GPA, sizeof(GPA));
    printf("favorite_subject : %s\n", favorite_subject, sizeof(favorite_subject));

    // ข้อมูลส่วนตัว
    printf("\n===ข้อมูลส่วนตัว===\n");
    printf("name : %s\n", name, sizeof(name));
    printf("age : %d\n", age, sizeof(age));
    printf("GPA : %.2f\n", GPA, sizeof(GPA));
    printf("favorite_subject : %s\n", favorite_subject, sizeof(favorite_subject));

    return 0;
}