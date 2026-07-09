#include <stdio.h>
int main()
{
    char Character_Name[50];
    int Max_Hp;
    int Attack_Power;
    int Defense;
    int Level;

    // ENTER DATA
    printf("== Create Character ==\n");
    printf("Character Name: ");
    scanf("%49s", Character_Name);
    printf("Max HP: ");
    scanf("%d", &Max_Hp);
    printf("Attack Power: ");
    scanf("%d", &Attack_Power);
    printf("Defense: ");
    scanf("%d", &Defense);
    printf("Level: ");
    scanf("%d", &Level);

    // CHARACTER STATE
    printf("\n== Character Sheet ==\n");
    printf("╔═════════════════════════════╗\n");
    printf("║ %-28s║\n", Character_Name);
    printf("╠═════════════════════════════╣\n");
    printf("║ Level: %-21d║\n", Level);
    printf("║ HP: %-24d║\n", Max_Hp);
    printf("║ ATk: %-23d║\n", Attack_Power);
    printf("║ DEF: %-23d║\n", Defense);
    printf("╠═════════════════════════════╣\n");
    printf("║ Hp Bar: ████████  100%      ║\n");
    printf("║ Power Score: %-15d║\n", (Attack_Power * 2 + Defense + Max_Hp) / 2);
    printf("╚═════════════════════════════╝\n");

    return 0;
}