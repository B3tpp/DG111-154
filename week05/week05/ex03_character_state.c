#include <stdio.h>
#include <stdbool.h>
int main()
{
    int max_hp, damage;
    int is_poisoned = 1, Attack_Count = 1;
    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &damage);
    printf("Poisoned: ");
    scanf("%d", &is_poisoned);
    printf("Attack Count: ");
    scanf("%d", &Attack_Count);
    if (is_poisoned == 1)
    {
        printf("Poisoned (1/1): 1\n");
    }
    else
    {
        printf("Poisoned (0/1): 0\n");
    }
    if (Attack_Count >= 5)
    {
        printf("Ultimate Ready!\n");
    }
    else
    {
        printf("Ultimate Not Ready!\n");
    }
    printf("\n === Character Status ===\n");

    int current_hp = max_hp - damage;
    if (current_hp < 0)
    {
        current_hp = 0;
    }

    int total_blocks = 10;
    int filled_blocks = (current_hp * total_blocks) / max_hp;

    printf("HP : [");
    for (int i = 0; i < filled_blocks; i++)
    {
        printf("#");
    }
    for (int i = 0; i < (total_blocks - filled_blocks); i++)
    {
        printf("-");
    }
    printf("] %d/%d\n", current_hp, max_hp);
    int HP = max_hp - damage;
    if (HP <= 0)
    {
        printf("State: DEAD!\n");
    }
    else
    {
        printf("State: Alive\n");
    }
    if (is_poisoned == 1)
    {
        printf("State: POISONED\n");
    }
    else
    {
        printf("State: NORMAL\n");
    }
    return 0;
}