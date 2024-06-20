#include <unistd.h>

int main()
{
    char *c = "Hello World!";
    write(1, c, 12);
    write(1, "\n", 1);
}