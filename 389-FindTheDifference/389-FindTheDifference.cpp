// Last updated: 9/8/2026, 12:36:33 am
class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0;
        int b=0;
        for(int i=0;i<s.size();++i){
            a=a^s[i];
        }
        for(int i=0;i<t.size();++i){
            b=b^t[i];
        }

        return a^b;
;
    }
};