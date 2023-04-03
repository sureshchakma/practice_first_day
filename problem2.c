#include <stdio.h>

int main() 
{
    int num1, num2;
    printf("Enter 2 number : ");
    scanf("%d %d", &num1, &num2);

    int summation = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, summation);

    int substraction = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, substraction);

    int multiplication = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, multiplication);

    float division = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, division);

    return 0;
}