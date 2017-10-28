// tells if 3 sides can form a triangle

#include <stdio.h>
#include <cs50.h>

bool valid_triangle()
{
        printf("give me your first side length: ");
        float x = get_float();
        printf("give me your second side length: ");
        float y = get_float();
        printf("give me your third side length: ");
        float z = get_float();

        if (x <= 0 || y <= 0 || z <= 0)
        {
            printf("Nope\n");
            return false;
        }

        if ((x + y <= z) || (y + z <= x) || (z + x <= y))
        {
            printf("Nope\n");
            return false;
        }
        printf("yea boi!\n");
        return true;
}

