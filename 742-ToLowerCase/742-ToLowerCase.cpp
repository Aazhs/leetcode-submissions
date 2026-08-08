// Last updated: 9/8/2026, 12:36:24 am
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();++i){
            if(isupper(s[i])>0){
                s[i]=tolower(s[i]);
            }
        }
        return s;
    }
};