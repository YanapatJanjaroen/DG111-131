#include <stdio.h>
#include <stdbool.h>

int main()
{
    int max_hp;
    int damage;
    int temp_poisoned;
    bool is_poisoned;
    int attack_count;

    printf("Enter max_hp (1-999): ");
    if (scanf("%d", &max_hp) != 1 || max_hp < 1 || max_hp > 999)
    {
        printf("Invalid input for max_hp. Please enter a value between 1 and 999.\n");
        return 1; // Exit with an error code
    }

    printf("Enter damage (0-999): ");
    if (scanf("%d", &damage) != 1 || damage < 0 || damage > 999)
    {
        printf("Invalid input for damage. Please enter a value between 0 and 999.\n");
        return 1; // Exit with an error code
    }

    printf("Enter is_poisoned (0 or 1): ");
    if (scanf("%d", &temp_poisoned) != 1 || (temp_poisoned != 0 && temp_poisoned != 1))
    {
        printf("Invalid input for is_poisoned. Please enter 0 or 1.\n");
        return 1; // Exit with an error code
    }

    printf("Enter attack_count (>=0): ");
    if (scanf("%d", &attack_count) != 1 || attack_count < 0)
    {
        printf("Invalid input for attack_count. Please enter a value greater than or equal to 0.\n");
        return 1; // Exit with an error code
    }

    is_poisoned = (temp_poisoned != 0);

    int hp = max_hp - damage;
    if (hp < 0)
        hp = 0;

    printf("Max HP: %d\n", max_hp);
    printf("Damage Taken: %d\n", damage);
    printf("Poisoned (0/1): %d\n", is_poisoned ? 1 : 0);
    printf("Attack Count: %d\n\n", attack_count);

    printf("=== Character Status ===\n");
    int filled = hp * 10 / max_hp;
    printf("HP : [");
    for (int i = 0; i < 10; i++)
    {
        printf(i < filled ? "█" : "-");
    }
    printf("] %d/%d", hp, max_hp);
    printf("State: ");

    if (hp <= 0)
    {
        printf("DEAD\n");
    }
    else if (hp * 100 < 25 * max_hp)
    {
        printf("CRITICAL\n");
    }
    else if (is_poisoned)
    {
        printf("POISONED\n");
    }
    else
    {
        printf("NORMAL\n");
    }

    if (attack_count % 5 == 0)
    {
        printf("Ultimate Ready!\n");
    }

    return 0;
}