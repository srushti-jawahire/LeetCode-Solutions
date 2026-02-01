#include <climits>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int cpy_num=x;
        int reverse_num=0;

    while(cpy_num>0){
            int last_digit=cpy_num%10;
            if(reverse_num>INT_MAX/10 || reverse_num<INT_MIN/10) return false;
            reverse_num=(reverse_num*10)+last_digit;
            cpy_num=cpy_num/10;
        }
        if(x==reverse_num) return true;
        return false;
    }
};