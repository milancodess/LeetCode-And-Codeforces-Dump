// 287. Find the Duplicate Number
#include <stdio.h>
int findDuplicate(int *nums, int numsSize);
int findDuplicate(int *nums, int numsSize)
{

    int slow = nums[0];
    int fast = nums[0];

    while (1)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];

        if (slow == fast)
        {
            break;
        }
    }

    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}

int main()
{
    int nums[] = {6, 9, 3, 12, 8, 5, 11, 10, 7, 4, 2, 1, 9};
    int length = sizeof(nums) / sizeof(nums[0]);
    int result = findDuplicate(nums, length);
    printf("Duplicate number: %d", result);
    return 0;
}