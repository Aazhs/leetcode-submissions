// Last updated: 9/8/2026, 12:36:03 am
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int nc=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]<0) nc+=1;
            else if(nums[i]==0) return 0;

        }
        if(nc%2==0) return 1;
        else return -1;
    }
};