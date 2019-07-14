#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    argc = 1;
    if (argv[1] == NULL)
    {
        return 1;
    }
    int k = atoi(argv[1]);
    string s = get_string("Plaintext: ");
    for (int i = 0, j = strlen(s); i <= j; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = ((s[i] - 'a' + k) % 26) + 'a';
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = ((s[i] - 'A' + k) % 26) + 'A';
        }
    }
    printf("ciphertext: %s\n", s);

    return 0;
}