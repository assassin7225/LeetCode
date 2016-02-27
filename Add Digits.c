258. Add Digits

Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example:
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
 

// 最後的結果只會有1~9 (因為超過兩位數的話還要再加)
// 所以取9的餘數
// 例外:0(回0) 9要回9

int addDigits(int num) {
    if (num==0){
        return 0;
    }
    else{
        if (num%9==0){
            return 9;
        }
        else{
            int result = num % 9;
            return result;
        }
    }
}