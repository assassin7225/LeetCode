136. Single Number

Given an array of integers, every element appears twice except for one.
Find that single one.
 

// 查了一下有人是先用quicksort排好之後再去看單一的那一個
// 不過這個解法有點神= =，主要是三個特性
// 1.XOR有交換性
// 2.兩個一樣的數取XOR會回傳0
// 3.任何數和0取XOR會是他自己

int singleNumber(int* nums, int numsSize) {
    int x=0;
    for(int i=0; i<numsSize; i++){
        x = x^ nums[i];
    }
    return x;
}