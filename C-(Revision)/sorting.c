#include <stdio.h>
int main()
{
    int a[] = {5, 1, 7, 8, 9, 3, 4, 0};
    int length = sizeof(a) / sizeof(a[0]);
    // printf("Length: %d", length);
}
int findDuplicate(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                return nums[i];
            }
        }
    }
    return -1;
}
