// Last updated: 9/8/2026, 12:36:42 am
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n <= 0) return false;

        long long a = 1; 
        
        while (a < n) {
            a = a * 2;
        }
        
        return a == n;
    }
};