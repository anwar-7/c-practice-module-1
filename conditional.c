#include <stdio.h>
int main()
{
    int a;
    printf("Please input a integer value: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {

        printf("%d - Even\n", a);
    }
    else
    {
        printf("%d - Odd\n", a);
    }

    return 0;
}