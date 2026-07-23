#include <stdio.h>
int main()
{
    int Gold = 300;
    int item;
    typedef enum
    {
        Main_Menu = 0,
        Health_Potion = 1,
        Mana_Potion = 2,
        Iron_Sword = 3,
        Leather_Armor = 4,
        Exit = 5
    } Item;
    printf("=== ITEM SHOP ===\n");
    printf("1. Health Potion - 50 Gold  (+50 HP)\n");
    printf("2. Mana Potion   - 80 Gold  (+30 MP)\n");
    printf("3. Iron Sword    - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");
    printf("You have %d Gold.\n", Gold);
    printf("Select item: ");
    scanf("%d", &item);
    printf("\n=== Purchase ===.\n", item);
    switch (item)
    {
    case Health_Potion:
        if (Gold >= 50)
        {
            Gold -= 50;
            printf("You bought a Health Potion!\n");
            printf("HP Bonus +50!\n");
            printf("Item purchased successfully! :3\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case Mana_Potion:
        if (Gold >= 80)
        {
            Gold -= 80;
            printf("You bought a Mana Potion!\n");
            printf("MP Bonus +30!\n");
            printf("Item purchased successfully! :3\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case Iron_Sword:
        if (Gold >= 500)
        {
            Gold -= 500;
            printf("You bought an Iron Sword!\n");
            printf("ATK Bonus +20!\n");
            printf("Item purchased successfully! :3\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case Leather_Armor:
        if (Gold >= 300)
        {
            Gold -= 300;
            printf("You bought Leather Armor!\n");
            printf("DEF Bonus +15!\n");
            printf("Item purchased successfully! :3\n");
        }
        else
        {
            printf("Not enough gold!\n");
        }
        break;
    case Exit:
        printf("Thank you for visiting the shop!\n");
        return 0;
    default:
        printf("Invalid selection!\n");
    }
    printf("You have %d Gold left.\n", Gold);
    return 0;
}