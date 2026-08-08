// Last updated: 9/8/2026, 12:37:12 am
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> thing;
        for(int i=0;i<nums.size();++i){
            if(thing.count(target-nums[i])>0 && thing[nums[i]]!=i){
                return {i,thing[target-nums[i]]};
            }
            thing[nums[i]]=i;
        }
        return {};
    }
};