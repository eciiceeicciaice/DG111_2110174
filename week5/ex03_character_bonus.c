#include <stdio.h>

int main()
{
    int max_hp, damage;
    int is_poisoned;
    int attack_count;
    int hp, filled;
    int i;

    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned (0/1): ");
    scanf("%d", &is_poisoned);

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    hp = max_hp - damage;
    if (hp < 0)
        hp = 0;

    printf("\nMax HP: %d\n", max_hp);
    printf("Damage Taken: %d\n", damage);
    printf("Poisoned (0/1): %d\n", is_poisoned);
    printf("Attack Count: %d\n", attack_count);

    printf("\n=== Character Status ===\n");

    filled = hp * 10 / max_hp;

    printf("HP : [");
    for (i = 0; i < 10; i++)
    {
        if (i < filled)
            printf("#");
        else
            printf("-");
    }
    printf("] %d/%d", hp, max_hp);

    if (hp > 0 && hp < (max_hp * 25) / 100)
        printf("  CRITICAL!");

    printf("\n");

    if (hp <= 0)
        printf("State: DEAD\n");
    else if (hp < (max_hp * 25) / 100)
        printf("State: CRITICAL\n");
    else if (is_poisoned == 1)
        printf("State: POISONED\n");
    else
        printf("State: NORMAL\n");

    if (attack_count > 0 && attack_count % 5 == 0)
        printf("Ultimate Ready! (Attack #%d)\n", attack_count);

    return 0;
}