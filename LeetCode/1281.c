#include <stdio.h>

int main()
{
    int n = 234;
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum = %d", sum);
    return 0;
}
