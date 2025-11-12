///week10-1.cpp 學習計畫第二題
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int N= mat.size();
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j || i+j==N-1)ans+=mat[i][j];
            }
        }
        return ans;
    }
};
