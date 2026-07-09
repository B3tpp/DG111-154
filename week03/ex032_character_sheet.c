#include <stdio.h>
int main()
{

    char Character_name[20];
    int Max_HP;
    int Attack_Power;
    int Defense;
    int level;
    int Power_Score;

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
    Power_Score = (Attack_Power * 2) + Defense + (Max_HP / 10.0);

    printf("=== CHARACTER SHEET ===\n");
    printf("╔══════════════════════════════╗\n");
    printf("║ %-29s║\n", Character_name);
    printf("╠══════════════════════════════╣ \n");
    printf("║ Level       : %-15d║\n", level);
    printf("║ HP          : %d / %-9d║\n", Max_HP, Max_HP);
    printf("║ ATK         : %-15d║\n", Attack_Power);
    printf("║ DFF         : %-15d║\n", Defense);
    printf("╠══════════════════════════════╣ \n");
    printf("║ HP Bar: [██████████] 100%    ║\n");
    printf("╠══════════════════════════════╣ \n");
    printf("║ Power Score: %-14d  ║\n", Power_Score);
    printf("╚══════════════════════════════╝\n");
    return 0;
}