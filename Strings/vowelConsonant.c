#include <stdio.h>

int main()
{
    char name[] = "Tanmoy Sarkar";
    int i, length = 0, vowel = 0, consonant = 0;
    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        if (name[i] == 'a' | name[i] == 'e' | name[i] == 'i' | name[i] == 'o' | name[i] == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("Vowels: %d\nConsonant: %d\n", vowel, consonant);
    return 0;
}
