#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **fizzBuzz(int n, int *returnSize)
{
    int x1 = 3, x2 = 5;
    int i, z, sig = 0, sog = 0, v1 = 0, v2 = 0;
    float po = 0;
    float pi = 0;
    char *q1 = "Fizz";
    char *q2 = "Buzz";
    char *qt = "FizzBuzz";
    int yo = 0, length;
    int temp_i;
    /* malloc */
    int track = 0;
    char **two_darray;

    two_darray = (char **)malloc(n * sizeof(char *));

    n++;

    for (i = 1; i < n; i++)
    {
        for (z = 1; z <= n; z++)
        {
            po = (float)i / x1;
            pi = (float)i / x2;

            if (po == (double)(int)po && pi == (double)(int)pi) /* both is not float */
            {
                yo = 3;
                break;
            }
            if (po != (double)(int)po) /* Check if the number is a float */
            {
                v1 = 1;
            }
            else /* is not */
            {
                sig = 1;
                break;
            }

            if (pi != (double)(int)pi) /* Check if the number is a float */
            {
                v2 = 2;
            }
            else /* is not */
            {
                sog = 2;
                break;
            }

            if (v1 == 1)
            {
                break;
            }
            else if (v2 == 2)
            {
                break;
            }
        }

        if (sig == 1)
        {
            two_darray[track] = (char *)malloc(strlen(q1) + 1);
            strcpy(two_darray[track], q1);
            sig = 0;
            track++;
            continue;
        }
        else if (sog == 2)
        {
            two_darray[track] = (char *)malloc(strlen(q2) + 1);
            strcpy(two_darray[track], q2);
            sog = 0;
            track++;
            continue;
        }
        else if (yo == 3)
        {
            two_darray[track] = (char *)malloc(strlen(qt) + 1);
            strcpy(two_darray[track], qt);
            yo = 0;
            track++;
            continue;
        }

        length = 0;
        temp_i = i;

        while (temp_i > 0)
        {
            temp_i /= 10;
            length++;
        }

        two_darray[track] = (char *)malloc(length + 1);
        sprintf(two_darray[track], "%d", i);

        po = 0;
        pi = 0;
        track++;
    }
    *returnSize = track;

    return two_darray;
}

int main()
{
    int n = 17;
    int returnSize;
    char **result = fizzBuzz(n, &returnSize);

    // Print the result
    for (int i = 0; i < returnSize; i++)
    {
        printf("%s ", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}
