#include <stdio.h>

char *triangleType(int *nums, int numsSize);

int main()
{
    int nums[] = {3, 3, 3};

    printf("%s\n", triangleType(nums, 3));

    return 0;
}

char *triangleType(int *nums, int numsSize)
{
    int a = nums[0], b = nums[1], c = nums[2];

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return "none";
    }

    if (a == b && b == c)
    {
        return "equilateral";
    }
    else if (a == b || a == c || b == c)
    {
        return "isosceles";
    }
    else
    {
        return "scalene";
    }
}