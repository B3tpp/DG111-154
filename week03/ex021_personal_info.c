#include <stdio.h>
int main()
{
    char name[100];
    int age;
    float gpa;
    char favorite_subject[100];

    printf("=== Enter Data ===\n");
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter GPA: ");
    scanf("%f", &gpa);
    printf("Enter Favorite Subject: ");
    scanf("%s", favorite_subject);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Favorite Subject: %s\n \n", favorite_subject);

    printf("=== Personal Info ===\n");
    printf("Name             : %s\n", name);
    printf("Age              : %d\n", age);
    printf("GPA              : %.2f\n", gpa);
    printf("Favorite Subject : %s\n", favorite_subject);

    return 0;
}