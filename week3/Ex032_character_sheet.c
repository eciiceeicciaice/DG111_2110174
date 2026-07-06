#include <stdio.h>

int main()
{
    // ประกาศและกำหนดค่าตัวแปร
    char name_character[50];
    int full_hp;
    int attack_power;
    int defense;
    int level;

    printf("===CHARACTER SHEET===\n");
    printf("╔══════════════════════════════╗\n");
    printf("║%-10s %-16s  ║\n", "DRAGON KNIGHT");
    printf("╠══════════════════════════════╣\n");
    printf("║%-10s : %-16d ║\n", "Name", name_character);
    printf("║%-10s : %-16d ║\n", "Full HP", full_hp);
    printf("║%-10s : %-16d ║\n", "Attack", attack_power);
    printf("║%-10s : %-16d ║\n", "Defense", defense);
    printf("║%-10s : %-16d ║\n", "Level", level);
    printf("╚══════════════════════════════╝\n");
    return 0;
}