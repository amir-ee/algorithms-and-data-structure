#include <stdio.h> // count words
#include <stdlib.h>
#include <string.h>

int CountWords(char txt[]);

int main()
{
    char txt[] = "  Programming is easy to learn.  ";

    int fin = CountWords(txt);

    printf("thr num of wrds is : %d\n", fin);

    return 0;
}

int CountWords(char txt[])
{
    int c_txt = 0;

    for (int i = 0; txt[i] != '\0'; i++)
    {
        c_txt++;
    }

    int n = 1;
    int yi = 0;

    for (int i = 0; i < c_txt; i++)
    {

        if (txt[i] == ' ')
        {
            n++;
            if (txt[i - 1] == ' ')
            {
                n--;
            }
        }
    }

    if (txt[c_txt - 1] == ' ')
    {
        n--;
    }

    if (txt[0] == ' ')
    {
        n--;
    }

    return n;
}
