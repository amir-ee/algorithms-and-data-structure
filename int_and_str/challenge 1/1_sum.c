#include <stdio.h> // sum

int main()
{
    int num;
    int sum = 0;

    printf("enter the nember : ");
    scanf("%d", &num);

    int num1 = num;

    for (; num != 0;)
    {
        int v = num % 10;
        sum += v;
        num /= 10;
    }

    printf("the sum of %d is %d\n", num1, sum);

    return 0;
}