// Last updated: 9/8/2026, 12:36:47 am
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hmap;
        int ans = 1;

        for( int i =0;i<nums.size(); i++){
            
            if(hmap.count(nums[i])>0){
                ans = 0;
                break;
            }

            if(hmap.count(nums[i])==0){
                hmap[nums[i]]+=1;
            }
        }

        if(ans == 1) return false;
        else return true;
    }
};