#include <stdio.h> // find a char
#include <stdlib.h>
#include <string.h>

int main()
{
    char txt[] = "Harmash is the best site to learn programming";
    char wrd = 'a';

    int c_txt = 0;
    for (int i = 0; txt[i] != '\0'; i++)
    {
        c_txt++;
    }

    for (int i = 0; i < c_txt; i++)
    {
        if (txt[i] == wrd)
        {
            printf("'%c' found at index : %d \n", wrd, i);
        }
    }

    return 0;
}