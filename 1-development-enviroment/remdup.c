#include <stdio.h>

int removeDuplicates(int *nums, int numsSize);

int main(void)
{
    int nums[10] = {0, 0, 0, 1, 1, 2, 2, 5, 5, 7};

    int size = removeDuplicates(nums, 10);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}

int *removeElement(int elementN, int *nums, int numsSize)
{

    for (int i = elementN; i < numsSize - 1; ++i)
    {
        nums[i] = nums[i + 1];
    }

    return nums;
}

int removeDuplicates(int *nums, int numsSize)
{
    int k = numsSize;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < k; ++j)
        {
            if (nums[i] == nums[j])
            {
                nums = removeElement(j, nums, k);
                --k;
                --j;
            }
        }
    }
    return k;
}