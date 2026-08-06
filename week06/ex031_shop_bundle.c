#include <stdio.h>

int main()
{
    int gold = 1000;
    int selection;
    int total = 0;

    _Bool boughtSword = 0;
    _Bool boughtArmor = 0;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n\n", gold);

    printf("1. Health Potion  -  50 Gold (+50 HP)\n");
    printf("2. Mana Potion    -  80 Gold (+30 MP)\n");
    printf("3. Iron Sword     - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor  - 300 Gold (+15 DEF)\n");
    printf("5. Checkout\n\n");

    do
    {
        printf("Select item: ");
        scanf("%d", &selection);

        switch (selection)
        {

        case 1:
            if (total + 50 > gold)
                printf("Not enough Gold!\n\n");
            else
            {
                total += 50;
                printf("Added Health Potion to cart.\n\n");
            }
            break;

        case 2:
            if (total + 80 > gold)
                printf("Not enough Gold!\n\n");
            else
            {
                total += 80;
                printf("Added Mana Potion to cart.\n\n");
            }
            break;

        case 3:
            if (total + 500 > gold)
                printf("Not enough Gold!\n\n");
            else
            {
                total += 500;
                boughtSword = 1;
                printf("Added Iron Sword to cart.\n\n");
            }
            break;

        case 4:
            if (total + 300 > gold)
                printf("Not enough Gold!\n\n");
            else
            {
                total += 300;
                boughtArmor = 1;
                printf("Added Leather Armor to cart.\n\n");
            }
            break;

        case 5:
            printf("\n=== Checkout ===\n");
            break;

        default:
            printf("Invalid selection!\n\n");
        }

    } while (selection != 5);

    if (boughtSword && boughtArmor)
    {
        total = total * 90 / 100;
        printf("Warrior Bundle! (-10%%)\n");
    }

    printf("\nTotal Paid: %d Gold\n", total);
    printf("Remaining : %d Gold\n", gold - total);

    return 0;
}