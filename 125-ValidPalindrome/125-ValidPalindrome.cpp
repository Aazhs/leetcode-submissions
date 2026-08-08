// Last updated: 9/8/2026, 12:36:56 am
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() < 2) return true;
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        int left = 0;
        int right = filtered.size() - 1;

        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;        
    }
};