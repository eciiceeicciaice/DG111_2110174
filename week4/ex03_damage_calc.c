#include <stdio.h>

int main()
{
    printf("=== COMBAT SIMULATOR ===\n");
    float damage, defense, final_damage;
    printf("player Attack: ");
    scanf("%f", &damage);
    printf("Enemy defense: ");
    scanf("%f", &defense);
    final_damage = damage - defense;
    printf("Hit Number: ");
    float hit_number;
    scanf("%f", &hit_number);
    float Damage = final_damage * hit_number;
    printf("Total damage: %.2f\n", Damage);

    int damage_category;
    if (Damage < 50)
    {
        damage_category = 1; // Low damage
        printf("Damage: Low damage.\n");
    }
    else if (Damage >= 50 && Damage < 100)
    {
        damage_category = 2; // Normal damage
        printf("Damage: Normal damage.\n");
    }
    else
    {
        damage_category = 3; // High damage
        printf("Damage: High damage.\n");
    }
    int critical_hit;
    if (Damage > 100)
    {
        critical_hit = 1; // Critical hit
        printf("Critical hit!*1.5\n");
    }
    else
    {
        critical_hit = 0; // Not a critical hit
        printf("No critical hit.\n");
    }

    return 0;
}
