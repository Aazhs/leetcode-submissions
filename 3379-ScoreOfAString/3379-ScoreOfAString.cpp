// Last updated: 9/8/2026, 12:35:50 am
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;++i){
            int v1=s[i];
            int v2=s[i+1];
            sum+=abs(v1-v2);
        }
        return sum;
    }
};