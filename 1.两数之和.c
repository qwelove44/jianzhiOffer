/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j, tmp;
    int *ret;
    for (i = 0; i < numsSize -1; ++i) {
        tmp = target - nums[i];
        for (j = i+1; j < numsSize; ++j) {
            if (tmp == nums[j]) {
                ret = (int *)malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    return NULL;
}


// @lc code=end

