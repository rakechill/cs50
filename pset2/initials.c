//asks for a name, returns initials (name can be as long as desired, but cannot account for hyphenated names)

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get name of user
    string name = get_string("wuts ur name: ");

    // print the first character in uppercase
    printf("%c", toupper(name[0]));

    for(int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            printf("%c" , toupper(name[i + 1]));
        }
    }


    // print a new line after the initials
    printf("\n");
}
