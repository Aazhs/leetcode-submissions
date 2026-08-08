// Last updated: 9/8/2026, 12:36:02 am
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26) return false;
        vector<bool> ans(26, false);
        for (char c : sentence) {
            if (c >= 'a' && c <= 'z') {
                ans[c - 'a'] = true;
            }
        }
        for (bool b : ans) {
            if (b==0) return false;
        }
        return true;
    }
};