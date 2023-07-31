#include <stdio.h> // this pis of code is replace a element in text witsh any element
#include <stdlib.h>
#include <string.h>

char *ReplaceAll(char txt[], char wrd[], char targ[]);

int main()
{

    char txt[] = "I like cats.I have one cat.mnmncat ctcats thux camfcatskh.";
    char wrd[] = "c";
    char targ[] = "d";

    char *finaly = ReplaceAll(txt, wrd, targ);

    printf("%s\n", finaly);

    free(finaly);

    return 0;
}

char *ReplaceAll(char txt[], char wrd[], char targ[])
{
    int c_txt = 0;
    int c_wrd = 0;
    int c_tar = 0;

    for (int i = 0; txt[i] != '\0'; i++)
    {
        c_txt++;
    }

    for (int i = 0; wrd[i] != '\0'; i++)
    {
        c_wrd++;
    }

    for (int i = 0; targ[i] != '\0'; i++)
    {
        c_tar++;
    }

    //--------------------------------------------------------

    int *finlis = calloc(c_txt, 4); //! all the indxes of wrd witsh 0 0 0 0 0

    int i3 = 0;
    for (int i = 0; i < c_txt; i++)
    {
        if (txt[i] == wrd[0])
        {
            int i2 = i;
            int gg = 0;
            int *lis = malloc(c_wrd * 4);
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

    //-----------------------------------------------

    int bv = 0;
    for (int i = 1; *(finlis + i) != 0; i++)
    {
        bv++;
    }
    int coun = bv + 1;

    int *ind_arr = realloc(finlis, coun * 4); //! all the indxes of wrd without 0 0 0 0 0

    char *p_ruse = malloc(c_txt - bv); //! arr without wrd element
    char *bgn_st = p_ruse;

    //---------------------------------------------------

    for (int i = 0; i < c_txt; i++)
    {
        int cio = 0;
        for (int x = 0; x < coun; x++)
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

    //----------------------------------------------------------

    int dix = coun / c_wrd;

    int *ndex = calloc(dix, 4); // ! first indxes of wrd

    int *bgnAddr = ndex;

    for (int i = 0; i < coun; i += c_wrd) //......???
    {
        *ndex = *(ind_arr + i);
        if (i + c_wrd == coun)
        {
            break;
        }
        ndex++;
    }

    ndex = bgnAddr;

    //-------------------------------------------------------------

    if (c_tar == c_wrd)
    {
        int len_fin = c_tar - c_wrd;

        char *fin = calloc(c_txt + len_fin + 1, 1); // + | wrd - targ

        int c_txt1 = 0;
        int c_txt_nw = 0;
        int c_index = 0;

        for (int i = 0; i < c_txt + len_fin;)
        {
            if (c_txt1 == ndex[c_index])
            {
                for (int t = 0; t < c_tar; t++)
                {
                    fin[i] = targ[t];
                    i++;
                    c_txt1++;
                }
                if ((c_index + 1) != dix)
                {
                    c_index++;
                }
            }
            else
            {
                fin[i] = p_ruse[c_txt_nw];
                i++;

                c_txt_nw++;
                c_txt1++;
            }
        }

        return fin;
    }
    else //!!!
    {
        int len_fin = c_tar - c_wrd;
        int calc = len_fin * dix;
        char *fin = calloc(c_txt + calc + 1, 1);

        int c_txt1 = 0;
        int c_txt_nw = 0;
        int c_index = 0;

        for (int i = 0; i < c_txt + calc;)
        {
            if (c_txt1 == ndex[c_index])
            {
                for (int t = 0; t < c_tar; t++)
                {
                    fin[i] = targ[t];
                    i++;
                    c_txt1++;
                }
                c_index++;
                c_txt1 -= len_fin;
            }
            else
            {
                fin[i] = p_ruse[c_txt_nw];
                i++;

                c_txt_nw++;
                c_txt1++;
            }
        }

        return fin;
    }
    free(ind_arr);
    free(p_ruse);
    free(ndex);
}
