#include <stdio.h>
int main()
{
    int a;
    printf("Please input a integer value: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d - Positive\n", a);
    }
    else if (a == 0)
    {
        printf("%d - Zero\n", a);
    }
    else
    {
        printf("%d - Negative\n", a);
    }
    return 0;
}