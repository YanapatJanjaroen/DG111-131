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
    printf("\n== Character Summary ==\n");
    printf("Name: %s\n", Character_Name);
    printf("Level: %d\n", Level);
    printf("HP: %d\n", Max_Hp);
    printf("ATk: %d\n", Attack_Power);
    printf("DEF: %d\n", Defense);

    return 0;
}