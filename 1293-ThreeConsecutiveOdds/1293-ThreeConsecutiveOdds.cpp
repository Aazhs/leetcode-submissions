// Last updated: 9/8/2026, 12:36:16 am
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=2;i<arr.size();i++){
            if(arr[i]%2!=0 & arr[i-1]%2!=0 & arr[i-2]%2!=0){
                return true;
                break;
            }
        }
        return false;
    }
};