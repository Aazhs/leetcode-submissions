// Last updated: 9/8/2026, 12:36:29 am
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        
        vector<int> sorted_score = score;
        sort(sorted_score.begin(), sorted_score.end(), greater<int>());
        
        // 2. Map each score to its Rank String
        unordered_map<int, string> rank_map;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                rank_map[sorted_score[i]] = "Gold Medal";
            } else if (i == 1) {
                rank_map[sorted_score[i]] = "Silver Medal";
            } else if (i == 2) {
                rank_map[sorted_score[i]] = "Bronze Medal";
            } else {
                rank_map[sorted_score[i]] = to_string(i + 1);
            }
        }
        
        vector<string> ans;
        for (int s : score) {
            ans.push_back(rank_map[s]);
        }
        
        return ans;
    }
};