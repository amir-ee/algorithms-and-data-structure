#include <stdio.h> // s1 s2 s3
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[] = "alxse";
    char s2[] = "xse";
    char s3[] = "alxsese";

    int c_s1 = 0;
    int c_s2 = 0;
    int c_s3 = 0;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        c_s1++;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        c_s2++;
    }
    for (int i = 0; s3[i] != '\0'; i++)
    {
        c_s3++;
    }

    //-----------------------------------------

    char *cond_1 = calloc(c_s1 + c_s2 + 1, 1);

    int po = 0;

    for (int i = 0; i < c_s1; i++)
    {
        *(cond_1 + po) = s1[i];
        po++;
    }

    for (int i = 0; i < c_s2; i++)
    {
        *(cond_1 + po) = s2[i];
        po++;
    }

    //----------------------------------------------

    int l = 0;
    for (int i = 0; i < c_s3; i++)
    {
        if (*(cond_1 + i) == s3[i])
        {
        }
        else
        {
            l++;
            break;
        }
    }

    if (l == 0)
    {
        printf("The concatenation of S1 and S2 is equal S3?   TRUE\n");
    }
    else
    {
        printf("The concatenation of S1 and S2 is equal S3?   FALSE\n");
    }
    //---------------------------------------------------------------

    int mn = 0;

    if (c_s1 <= c_s2)
    {
        for (int i = 0; i < c_s2; i++)
        {
            if (s2[i] == s1[0])
            {
                int kl = i;
                int ts = 0;
                for (int o = 0; o < c_s1; o++)
                {
                    if (s2[kl] == s1[o])
                    {
                        ts++;
                    }
                    else
                    {
                        break;
                    }
                    kl++;
                }
                if (ts == c_s1)
                {
                    mn++;
                }
                else
                {
                    ts = 0;
                }
            }
            if (mn > 0)
            {
                break;
            }
        }
    }
    if (mn > 0)
    {
        printf("S1 is part of S2 or S1=S2?   TRUE\n");
    }
    else
    {
        printf("S1 is part of S2 or S1=S2?   FALSE\n");
    }

    //-----------------------------------------------------------

    int mod = c_s1 % 2;

    int c_h = c_s1 / 2;

    int bn = 0;

    for (int i = c_h; i < c_s1; i++)
    {
        int bl = 0;
        if (s1[i] == s2[0])
        {
            int k = i;
            for (int y = 0; y < c_s2; y++)
            {
                if (s1[k] == s2[y])
                {
                    bl++;
                }
                else
                {
                    break;
                }
                k++;
            }

            if (bl == c_s2)
            {
                bn++;
            }
            else
            {
                bl = 0;
            }
        }
        if (bn == 1)
        {
            break;
        }
    }
    if (bn > 0)
    {
        printf("S2 is part of the second half of S1? TRUE\n");
    }
    else
    {
        printf("S2 is part of the second half of S1? FALSE\n");
    }

    //------------------------------------------------------------

    printf("The first half characters of S1 are: ");

    for (int i = 0; i < c_h; i++)
    {
        printf("%c", s1[i]);
    }

    printf("\n");

    free(cond_1);
    return 0;
}
