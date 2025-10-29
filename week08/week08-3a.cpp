///week08-3a.cpp leetcode ¾Ç²ß­pµe
///1275 find winner on a tic tac toe game
class Solution {
public:
    void myPrint(int a[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << a[i][j]<<" ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};
        int now=1;
        for(vector<int> move:moves){
            int i=move[0],j=move[1];
            a[i][j]=now;
            myPrint(a);
            if(now==1)now=2;
            else now=1;
        }

        return 'A';

    }
};
