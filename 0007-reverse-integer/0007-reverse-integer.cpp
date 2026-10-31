#include <climits>
class Solution {
public:
    int reverse(int x) {
        long long n = x;
        long long num = 0;
        int sig = 1;
        if (x<0) {
            n *= -1;
            sig = -1;
        }
        while (n>0) {
            int rem = n%10;
            n /= 10;
            num = num * 10 + rem;
        }
    if (num > INT_MAX) return 0;
    return num * sig;
    }
};