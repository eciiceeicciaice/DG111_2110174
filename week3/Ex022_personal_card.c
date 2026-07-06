#include <stdio.h>

int main()
{
    // ประกาศและกำหนดค่าตัวแปร
    int age;
    float gpa = 3.75f;
    char name[100];
    char major[100];
    // แสดงค่า
    printf("ป้อนข้อมูล\n");
    printf("name\n");
    scanf("%s", name);
    printf("age\n");
    scanf("%d", &age);
    printf("GPA\n");
    scanf("%f", &gpa);
    printf("Major\n");
    scanf("%s", major);

    printf("===PERSONAL CARD===\n");
    printf("┌──────────────────────────┐\n");
    printf("│%-5s : %-18s│\n", "Name", name);
    printf("│%-5s : %-18d│\n", "Age", age);
    printf("│%-5s : %-18.2f│\n", "GPA", gpa);
    printf("│%-5s : %-18s│\n", "Major", major);
    printf("└──────────────────────────┘\n");
    return 0;
}