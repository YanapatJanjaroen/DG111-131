#include <stdio.h>
#include <math.h>
int main()
{
    int player_attack, Enemy_defense, Hit_Number;
    printf("== COMBAT SIMULATOR ==\n");
    printf("Enter player's attack power: ");
    scanf("%d", &player_attack);
    printf("Enter enemy's defense: ");
    scanf("%d", &Enemy_defense);
    printf("Enter number of hits: ");
    scanf("%d", &Hit_Number);
    int base_damage = player_attack - Enemy_defense;

    if (Hit_Number % 5 == 0)
    {
        int damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage: %d *** Critical Hit! x1.5 ***\n", damage);
    }
    else
    {
        int damage = base_damage;
        printf("Damage: %d (Normal)\n", damage);
    }

    return 0;
}