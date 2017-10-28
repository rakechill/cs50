//asks for number of minutes in shower, returns how many water bottles of water used

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    printf("Minutes: ");
    do
    {
        n = get_int();
    }
    while(n <= 0);

    n = n * 12;
    printf("Bottles: %d\n", n);
}







