// Last updated: 9/8/2026, 12:36:22 am
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();++i){
            for(int j=0;j<image[i].size();++j){   
                if(image[i][j]==1) image[i][j]=0;
                else image[i][j]=1;
            }
            int n = image[i].size();
            for(int j = 0; j < n / 2; ++j) {
                int temp = image[i][j];
                image[i][j] = image[i][n - 1 - j]; 
                image[i][n - 1 - j] = temp;
            }
        }
        return image;
    }
};