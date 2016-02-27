260. Single Number III

Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

For example:

Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

Note:
The order of the result is not important. So in the above example, [5, 3] is also correct.
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
 
// 這鬼東西我還是不太明白
// 把他們全部取XOR，然後因為每個數有1的bits位子不同，就可以那兩個single number分到兩堆

int* singleNumber(int* nums, int numsSize, int* returnSize) {
if (!nums || (numsSize < 2)) return NULL;
    int* ret = (int*)malloc(sizeof(int) * 2);
    if (ret) {
        int i, x = 0, y = 0, flag, tmp;
        for (i = 0; i < numsSize; i++) x ^= nums[i];
        flag = x & -x;
        for (i = 0; i < numsSize; i++) if ((tmp = nums[i]) & flag) y ^= tmp;
        ret[0] = x ^ y;
        ret[1] = y;
        if (returnSize) *returnSize = 2;
    }
    return ret;
}