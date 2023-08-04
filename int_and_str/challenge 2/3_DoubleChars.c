#include <stdio.h> // test1.c
#include <stdlib.h>
#include <string.h>

char *DoubleChars(char txt[]);

int main()
{
    char txt[] = "mir pali";

    char *fip = DoubleChars(txt);

    printf("%s\n", fip);

    free(fip);
    return 0;
}

char *DoubleChars(char txt[])
{
    int c_txt = 0;

    for (int i = 0; '\0' != txt[i]; i++)
    {
        c_txt++;
    }

    //-------------------------------------

    int dobl = c_txt * 2;

    char *fin_lis = calloc(dobl + 1, 1);

    int c_fin_lis = 0;

    for (int i = 0; i < c_txt; i++)
    {
        for (int t = 0; t < 2; t++)
        {
            *(fin_lis + c_fin_lis) = txt[i];
            c_fin_lis++;
        }
    }

    return fin_lis;
}
