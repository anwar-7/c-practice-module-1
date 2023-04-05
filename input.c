#include <stdio.h>
int main()
{
    int a, b;
    printf("Please input two integer value: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int minus = a - b;
    int division = a / b;
    int multiplication = a * b;
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, minus);
    printf("%d / %d = %d\n", a, b, division);
    printf("%d * %d = %d\n", a, b, multiplication);
    return 0;
}