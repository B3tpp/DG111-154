#include <stdio.h>
int main()
{

    char Character_name[100];
    int Max_HP;
    int Attack_Power;
    int Defense;
    int level;

    printf("=== Create Character ===\n");
    printf("Name        : ");
    scanf("%s", Character_name);
    printf("Health      : ");
    scanf("%d", &Max_HP);
    printf("Attack Power: ");
    scanf("%d", &Attack_Power);
    printf("Defense     : ");
    scanf("%d", &Defense);
    printf("Level       : ");
    scanf("%d", &level);

    printf("=== Character Summary ===\n");
    printf("Name        : %s\n", Character_name);
    printf("Level       : %d\n", level);
    printf("HP          : %d\n", Max_HP);
    printf("ATK         : %d\n", Attack_Power);
    printf("DFF         : %d\n", Defense);

    return 0;
}