// Last updated: 9/8/2026, 12:35:52 am
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        vector<int> ans;
        for(int i = 0; i<n; i += 2){
            ans.push_back(nums[i+1]);
            ans.push_back(nums[i]);
        }
        return ans;
    }
};