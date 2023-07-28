#include <stdio.h> // count words inside text
#include <stdlib.h>

int CountOccurrences(char text[], char word[]);

int main()
{
    char text[] = "I like cats. I havcate one cat called Lola";
    char word[] = "cat";

    int vb = CountOccurrences(text, word);

    printf("the number of %s is %d\n", word, vb);
    return 0;
}

int CountOccurrences(char text[], char word[])
{
    int c = 0, w = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        c++;
    }

    for (int i = 0; word[i] != '\0'; i++)
    {
        w++;
    }

    int counter = 0, counter1 = 0;
    int *jp = &counter1;

    for (int i = 0; i < c; i++)
    {
        int ipp = i;
        char n1, n2;
        n2 = text[i];
        n1 = word[0];
        if (n1 == n2)
        {
            for (int x = 0; x < w; x++)
            {
                char n11, n22;
                n22 = text[ipp];
                n11 = word[x];
                if (n11 == n22)
                {
                    counter1++;
                }
                else
                {
                    break;
                }
                ipp++;
            }
            if (counter1 == w)
            {
                counter++;
            }
            *jp = 0;
        }
    }
    return counter;
}