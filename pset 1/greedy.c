#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("oh hai! How much change is owed? ");
    float f;
    do
    {
        f = get_float();
    }
    while(f <= 0);

    int c = f * 100;
    int count = 0;

    while (c >= 25)
    {
        count++;
        c = c - 25;
    }
    while (c >= 10)
    {
        count++;
        c = c - 10;
    }
    while (c >= 5)
    {
        count++;
        c = c - 5;
    }
    while (c >= 1)
    {
        count++;
        c = c - 1;
    }

    printf("%i\n", count);
}
