// Last updated: 9/8/2026, 12:36:04 am
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size()+word2.size();
        string ans;
        int m,k=0,j=0;
        word1.size()>=word2.size()?m=word2.size():m=word1.size();
        for(int i=0;i<m*2;++i){
            if(i%2==0){
                ans+=word1[k];
                k+=1;
            }
            else{
                ans+=word2[j];
                j+=1;
            }
            
        }

        m==word1.size()?ans+=word2.substr(m):ans+=word1.substr(m);
        
        return ans;
    }
};