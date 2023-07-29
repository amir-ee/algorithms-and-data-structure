#include <stdio.h> // test1.c
#include <stdlib.h>

//! char * ! we use it when we want to returne addres of pointer or arr to the main

char *ReverseString(char tex[]);

int main()
{
    char tex[] = "I love programming";

    char *x = ReverseString(tex);

    printf("%s\n", x);

    return 0;
}

char *ReverseString(char tex[])
{
    int c = 0;
    for (int i = 0; tex[i] != '\0'; i++)
    {
        c++;
    }

    char *ram = malloc(c + 1);
    char *addr = ram;

    int c1 = c - 1;
    for (int i = 0; i < c; i++)
    {
        *ram = tex[c1];
        c1--;

        ram++;
    }
    *ram = '\0';
    ram = addr;

    return ram;
}