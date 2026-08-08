// Last updated: 9/8/2026, 12:36:58 am
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;++i){
            vector<int> currentRow;
            if(i == 0){
                currentRow.push_back(1);
            }
            else if (i == 1) {
                currentRow.push_back(1);
                currentRow.push_back(1);
            }
            else{
                for(int j=0;j<=i;++j){
                    if (j == 0) {
                        currentRow.push_back(1);
                    }
                    else if (j == i) {
                        currentRow.push_back(1);
                    }
                    else{
                        currentRow.push_back(ans[i-1][j-1]+ans[i-1][j]);
                    }
                }
            }
            ans.push_back(currentRow);
        }
        return ans;
    }   
};