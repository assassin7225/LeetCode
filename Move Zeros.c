283. Move Zeroes
 
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
 

// 類似bubble sort的方法
// 從最左邊的矩陣開始掃，如果是非0的就往前比較有沒有0，有0就往前移一格，沒有0就停下來。
// 天啊現在講來簡單，我那個時候到底是在卡三小= =

void moveZeroes(int* nums, int numsSize) {
    for (int i=0; i<numsSize; i++){
        if (nums[i]!=0){
            for (int j=i; j>=1; j--){
                if (nums[j-1]==0){
                    int *temp = nums[j];
                    nums[j]= nums[j-1];
                    nums[j-1] = temp;
                }
                else{
                    break;
                }
            }
        }
    }
}