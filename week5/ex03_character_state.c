#include <stdio.h>

int main()
{
    int max_hp, damage;
    _Bool is_poisoned;
    int attack_count;
    int hp;

    // รับข้อมูล
    printf("Enter max_hp: ");
    scanf("%d", &max_hp);

    printf("Enter damage: ");
    scanf("%d", &damage);

    printf("Is poisoned (0/1): ");
    scanf("%d", &is_poisoned);

    printf("Enter attack count: ");
    scanf("%d", &attack_count);

    // คำนวณ HP
    hp = max_hp - damage;
    if (hp < 0)
    {
        hp = 0;
    }

    printf("\n=== Character Status ===\n");

    // ตรวจสอบสถานะ
    if (hp <= 0)
    {
        printf("State: DEAD\n");
    }
    else if ((float)hp / max_hp < 0.25)
    {
        printf("State: CRITICAL\n");
    }
    else if (is_poisoned)
    {
        printf("State: POISONED\n");
    }
    else
    {
        printf("State: NORMAL\n");
    }

    // Ultimate Ready
    if (attack_count >= 5)
    {
        printf("Ultimate Ready!\n");
    }

    return 0;
}