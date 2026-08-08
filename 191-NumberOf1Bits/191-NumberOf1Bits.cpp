// Last updated: 9/8/2026, 12:36:50 am
class Solution {
public:
    int hammingWeight(int n) {
        string bin = bitset<32>(n).to_string();
        int ans=0;
        for(int i = 0;i<bin.size();++i){
            if(bin[i]=='1') ans+=1;
        }
        return ans;
    }
};