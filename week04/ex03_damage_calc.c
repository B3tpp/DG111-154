#include <stdio.h>
#include <math.h>
int main()
{
    int Player_Attack;
    int Enemy_Defense;
    int Hit_Number;
    int base_damage;
    int enemy_hp = 6767;
    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player_Attack :");
    scanf("%d", &Player_Attack);
    printf("Enemy_Defense :");
    scanf("%d", &Enemy_Defense);
    printf("Hit_Number :");
    scanf("%d", &Hit_Number);
    base_damage = Player_Attack - Enemy_Defense;
    if (Hit_Number % 5 == 0)
    {
        base_damage = (int)ceil((float)base_damage * 1.5f);
        printf("Critical damage : %d\n", base_damage);
        enemy_hp = enemy_hp - base_damage;
        printf("Enemy HP : %d\n", enemy_hp);
    }
    else
    {
        printf("Damage:%d\n", base_damage);
        enemy_hp = enemy_hp - base_damage;
        printf("Enemy HP : %d\n", enemy_hp);
    }

    return 0;
}