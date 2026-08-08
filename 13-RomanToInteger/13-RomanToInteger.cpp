// Last updated: 9/8/2026, 12:37:09 am
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> h1={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int sum=0;

        for(int i=0;i<s.size();++i){
            if(h1[s[i]]>=h1[s[i+1]]){
                sum+=h1[s[i]];
            }
            else if(h1[s[i]]<h1[s[i+1]]){
                sum+=h1[s[i+1]]-h1[s[i]];
                i++;
            }
        }
        return sum;
    }
};