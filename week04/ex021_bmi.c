#include <stdio.h>
int main()
{
    int weight;
    float height_m;
    float height_cm;
    float BMI;
    printf("=== Enter Data ===\n");
    printf("Enter weight: ");
    scanf("%d", &weight);
    printf("Enter height: ");
    scanf("%f", &height_cm);
    height_m = height_cm / 100.0;
    BMI = weight / (height_m * height_m);
    printf("you BMI is: %.2f\n", BMI);

    if (BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (18.5 && BMI <= 24.9)
    {
        printf("Normal");
    }
    else if (25.0 && BMI <= 29.9)
        ;
    {
        printf("Overweight");
    }
    if (BMI >= 30)
        ;
    {
        printf("Obese");
    }
    return 0;
}