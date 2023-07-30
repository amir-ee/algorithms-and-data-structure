#include <stdio.h> // test1.c
#include <stdlib.h>
char *removeAllx(char txt[], char wrd[]);
int main()
{
    char txt[] = "Icca gca.";
    char wrd[] = "ca";

    char *p = removeAllx(txt, wrd);

    printf("%s\n", p);

    free(p);

    return 0;
}

char *removeAllx(char txt[], char wrd[])
{
    int c_txt = 0;
    int c_wrd = 0;

    for (int i = 0; txt[i] != '\0'; i++)
    {
        c_txt++;
    }

    for (int i = 0; wrd[i] != '\0'; i++)
    {
        c_wrd++;
    }

    int *finlis = calloc(c_txt, 4); //!

    int i3 = 0;
    for (int i = 0; i < c_txt; i++)
    {
        if (txt[i] == wrd[0])
        {
            int i2 = i;
            int gg = 0;
            int *lis = malloc(c_wrd * 4); //!
            for (int x = 0; x < c_wrd; x++)
            {
                if (txt[i2] == wrd[x])
                {
                    *(lis + x) = i2;
                    gg++;
                }
                else
                {
                    break;
                }
                i2++;
            }
            if (c_wrd == gg)
            {
                for (int ck = 0; ck < c_wrd; ck++)
                {
                    *(finlis + i3) = *(lis + ck);
                    i3++;
                }
                free(lis);
            }
            else
            {
                free(lis);
            }
        }
    }

    int bv = 0;
    for (int i = 1; *(finlis + i) != 0; i++)
    {
        bv++;
    }

    int *ind_arr = realloc(finlis, (bv + 1) * 4);

    char *p_ruse = malloc(c_txt - bv);
    char *bgn_st = p_ruse;

    for (int i = 0; i < c_txt; i++)
    {
        int cio = 0;
        for (int x = 0; x < bv + 1; x++)
        {
            int c22 = *(ind_arr + x);
            if (i == c22)
            {
                cio++;
            }
        }
        if (cio == 0)
        {
            *p_ruse = txt[i];
            p_ruse++;
        }
    }
    *p_ruse = '\0';
    p_ruse = bgn_st;

    free(ind_arr);
    return p_ruse;
}