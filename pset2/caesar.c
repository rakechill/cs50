// we are getting the key, getting the plaintext,
// translating to ciphertext, and printing the ciphertext

// c(initial) = (p(initial) + k) % 26

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHA 26
#define ASCIIa 97
#define ASCIIA 65

int main(int argc, string argv[])
{
   if(argc != 2)
   {
       printf("WRONG.\n");
       return 1;
   }
   int k = atoi(argv[1]);

   if(k < 0)
   {
       printf("your key must be positive.\n");
       return 1;
   }
    printf("plaintext: ");
    string p = get_string();


    printf("ciphertext: ");
    for (int i = 0, n = strlen(p); i < n; i++)
        {
            if islower(p[i])
            {
                printf("%c", (((p[i] + k) - ASCIIa) % ALPHA) + ASCIIa);
            }
            else if isupper(p[i])
            {
                printf("%c", (((p[i] + k) - ASCIIA) % ALPHA) + ASCIIA);
            }
            else
            {
                printf("%c", p[i]);
            }
        }
    printf("\n");
    return 0;
}
