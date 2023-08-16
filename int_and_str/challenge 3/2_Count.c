#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countNoneEscapeChars(char *s)
{

    if (s[0] == '\0')
    {
        return 0;
    }

    int counter = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (!isspace(s[i]))
        {
            counter++;
        }
    }

    return counter;
}
void main()
{

    char *text = "Hi Lora.\nHow are you?.";
    int numberOfNoneEscapeChars = countNoneEscapeChars(text);

    printf("Total characters: %d", numberOfNoneEscapeChars);
}