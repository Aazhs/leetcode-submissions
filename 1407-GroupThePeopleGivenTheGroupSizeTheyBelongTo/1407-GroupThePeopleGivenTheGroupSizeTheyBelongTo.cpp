// Last updated: 9/8/2026, 12:36:14 am
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> mp;
        vector<vector<int>> ans;

        for(int i = 0; i < groupSizes.size(); ++i) {
            int sizeNeeded = groupSizes[i];
            
            mp[sizeNeeded].push_back(i);

            if(mp[sizeNeeded].size() == sizeNeeded) {
                ans.push_back(mp[sizeNeeded]);
                mp[sizeNeeded].clear();
            }
        }
        
        return ans;
    }
};