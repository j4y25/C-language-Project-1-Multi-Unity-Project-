#include <stdio.h>

int main()
{
    float basicSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    printf("===== Gross Salary Calculator =====\n");

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA Percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA Percentage: ");
    scanf("%f", &taPercent);

    hra = (basicSalary * hraPercent) / 100;
    da = (basicSalary * daPercent) / 100;
    ta = (basicSalary * taPercent) / 100;

    grossSalary = basicSalary + hra + da + ta;

    printf("\nHRA = %.2f", hra);
    printf("\nDA = %.2f", da);
    printf("\nTA = %.2f", ta);

    printf("\nGross Salary = %.2f", grossSalary);

    return 0;
}