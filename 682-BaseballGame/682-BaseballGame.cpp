// Last updated: 9/8/2026, 12:36:27 am
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(int i=0;i<operations.size();++i){
            if(operations[i]=="+"){
                ans.push_back(ans[ans.size()-1]+ans[ans.size()-2]);
            }
            else if(operations[i]=="C"){
                ans.pop_back();
            }
            else if(operations[i]=="D"){
                if (!ans.empty()) {
                    ans.push_back(2 * ans.back());
                }
            }
            else{
                ans.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();++i){
            sum+=ans[i];
        }
        return sum;
    }
};