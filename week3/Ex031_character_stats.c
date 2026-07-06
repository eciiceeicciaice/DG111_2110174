#include <stdio.h>

int main()
{
    // ประกาศและกำหนดค่าตัวแปร
    char name_character[50];
    int full_hp;
    int attack_power;
    int defense;
    int level;

    // แสดงค่า
    printf("===สร้างตัวละคร===\n");
    printf("name\n");
    scanf("%s", name_character);
    printf("full_hp\n");
    scanf("%d", &full_hp);
    printf("attack_power\n");
    scanf("%d", &attack_power);
    printf("defense\n");
    scanf("%d", &defense);
    printf("level\n");
    scanf("%d", &level);

    printf("===สรุปข้อมูลตัวละคร===\n");
    printf("%-10s : %s\n", "Name", name_character);
    printf("%-10s : %d\n", "Full HP", full_hp);
    printf("%-10s : %d\n", "Attack", attack_power);
    printf("%-10s : %d\n", "Defense", defense);
    return 0;
}