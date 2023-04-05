#include <stdio.h>
int main()
{
    int budget;
    printf("How much money do you have: ");
    scanf("%d", &budget);
    if (budget >= 10000)
    {
        printf("Gucci Bag\n");
        if (budget > 20000)
        {
            printf("Gucci Belt\n");
        }
    }
    else if (budget >= 5000)
    {
        printf("Levis Bag\n");
    }
    else
    {
        printf("Something\n");
    }
    return 0;
}