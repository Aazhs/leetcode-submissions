// Last updated: 9/8/2026, 12:35:55 am
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans=0;
        for(auto i:hours){
            if(i>=target){
                ans++;
            }
        }
        return ans;
    }
};