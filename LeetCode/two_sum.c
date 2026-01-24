#include <stdio.h>
#include <stdlib.h>

// 1. Two Sum
//     Solved, Easy
//     Given an array of integers nums and an integer target,
//     return indices of the two numbers such that they add up to target.

//     You may assume that each input would have exactly one solution,
//     and you may not use the same element twice.

//     You can return the answer in any order.

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {

            if (nums[i] + nums[j] == target)
            {
                int *result = (int *)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int main()
{
    int nums[] = {2, 4, 6, 8};
    int target = 12;
    int returnSize;

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int *answer = twoSum(nums, numsSize, target, &returnSize);

    printf("Indexes: %d %d\n", answer[0], answer[1]);

    free(answer);
    return 0;
}
