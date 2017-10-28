//uses series of alphabetical characters as a key to encrypt argv[1]

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHA 26
#define ASCIIa 97
#define ASCIIA 65

int main(int argc, string argv[])
{
    //makes sure you have right number of arguments
    if(argc != 2)
   {
       printf("WRONG.\n");
       return 1;
   }

    //assigns the key
    string k = argv[1];

   //checks to see if it's an alphabetical argument
   for ( int i = 0, n = strlen(k); i < n; i++ )
   {
       if (!isalpha(k[i]))
       {
           return 1;
       }

   }

    //gets plaintext
    printf("plaintext: ");
    string p = get_string();

    //checks for case of plaintext and gets ciphertext
    printf("ciphertext: ");
    for ( int i = 0, n = strlen(p); i < n; i++ )
        {
            int m = strlen(k);
            if islower(p[i])
            {
                printf("%c", (((p[i] + k[i%m]) - ASCIIa - ASCIIa) % ALPHA) + ASCIIa);
            }
            else if isupper(p[i])
            {
                printf("%c", (((p[i] + k[i%m]) - ASCIIA - ASCIIA) % ALPHA) + ASCIIA);
            }
            else
            {
                printf("%c", p[i]);
            }

        }
    printf("\n");
    return 0;


}
