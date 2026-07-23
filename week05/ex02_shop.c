#include <stdio.h>
int main()
{
    int item_number;
    int Gold = 1000;
    int Health_Potion = 50;
    int Mana_Potion = 80;
    int Iron_Sword = 500;
    int Leather_Armor = 300;
    printf("== ITEM SHOP ==\n");
    printf("Gold: %d\n", Gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");
    printf("select an item (1-5): ");
    scanf("%d", &item_number);

    switch (item_number)
    {
    case 1:
        if (Gold < 50)
        {
            printf("Not enough Gold!\n");
        }
        else
        {
            printf("=== Purchase ===\n");
            printf("Health Potion : %d Gold\n", Health_Potion);
            printf("Remaining :%d Gold\n", Gold - Health_Potion);
            printf("Hp bonus : +50 HP\n");
        }
        break;
    case 2:
        if (Gold < 80)
        {
            printf("Not enough Gold!\n");
        }
        else
        {
            printf("=== Purchase ===\n");
            printf("Mana Potion : %d Gold\n", Mana_Potion);
            printf("Remaining :%d Gold\n", Gold - Mana_Potion);
            printf("Mp bonus : +30 MP\n");
        }
        break;
    case 3:
        if (Gold < 500)
        {
            printf("Not enough Gold!\n");
        }
        else
        {
            printf("=== Purchase ===\n");
            printf("Iron Sword : %d Gold\n", Iron_Sword);
            printf("Remaining :%d Gold\n", Gold - Iron_Sword);
            printf("Atk bonus : +20 ATK\n");
        }
        break;
    case 4:
        if (Gold < 300)
        {
            printf("Not enough Gold!\n");
        }
        else
        {
            printf("=== Purchase ===\n");
            printf("Leather Armor : %d Gold\n", Leather_Armor);
            printf("Remaining :%d Gold\n", Gold - Leather_Armor);
            printf("Def bonus : +15 DEF\n");
        }
        break;
    case 34:
        if (Gold < (Iron_Sword + Leather_Armor) * 90 / 100)
        {
            printf("Not enough Gold!\n");
        }
        else
        {
            printf("=== Purchase ===\n");
            printf("(Warrior Bundle!)\n");
            printf("Iron Sword : %d Gold\n", Iron_Sword);
            printf("Leather Armor : %d Gold\n", Leather_Armor);
            printf("Remaining :%d Gold \n", Gold - (Iron_Sword + Leather_Armor) * 90 / 100);
            printf("Atk bonus : +20 ATK\n");
            printf("Def bonus : +15 DEF\n");
        }
        break;
    case 5:
        printf("Exit\n");
        break;
    default:
        printf("Invalid item number\n");
    }

    if (item_number >= 1 && item_number <= 4)
    {
        printf("Item purchased successfully! ✓\n");
    }
    else

        return 0;
}