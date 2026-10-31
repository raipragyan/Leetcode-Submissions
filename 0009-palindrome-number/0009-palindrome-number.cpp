class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long n = 0;
        long num = x;
        while (x>0) {
            int rem = x%10;
            x /= 10;
            n = n * 10 + rem;
        }
        if (n==num) return true;
        else return false;
    }
};