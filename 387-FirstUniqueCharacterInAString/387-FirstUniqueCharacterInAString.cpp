// Last updated: 9/8/2026, 12:36:34 am
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;       
    }
};