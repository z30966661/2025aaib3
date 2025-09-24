///week03-5.cpp
///Leetcode 9 Arithmetic Progression from sequence
///р计逼 琌ぃ琌常畉妓计
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());///р皚逼
        int d=arr[1]-arr[0];///ㄢ计畉ぶ d
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1] !=d) return false;
        }
        return true;

    }
};
