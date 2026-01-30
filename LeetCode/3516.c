#include <stdio.h>
#include <stdlib.h>

int findClosest(int x, int y, int z)
{
    int d1 = abs(x - z);
    int d2 = abs(y - z);

    if (d1 < d2)
        return 1;
    if (d2 < d1)
        return 2;
    return 0;
}

int main()
{
    int x = 2, y = 7, z = 4;

    int result = findClosest(x, y, z);

    printf("Result: %d\n", result);

    return 0;
}
