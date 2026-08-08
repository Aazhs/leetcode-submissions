// Last updated: 9/8/2026, 12:36:07 am
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i=0;i<accounts.size();++i){
            int sum=0;
            for(int j=0;j<accounts[i].size();++j){
                sum+=accounts[i][j];
            }
            if(sum>=max) max=sum;
        }
        return max;
    }
};