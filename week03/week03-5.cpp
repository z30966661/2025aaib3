///week03-5.cpp
///Leetcode 9 Arithmetic Progression from sequence
///��Ʀr�p�ƨ�j �O���O���t�@�˪��Ʀr
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());///��}�C�p��j�Ʀn
        int d=arr[1]-arr[0];///��Ʈt�h�� d
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1] !=d) return false;
        }
        return true;

    }
};
