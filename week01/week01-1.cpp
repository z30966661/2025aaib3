//Leedcode 學習計畫 大海撈針在haystack找到needle
//28.Find the index of the First Occurrence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        //要用迴圈 把所有可能的位置 都找過一次
        //ex, sadbutsad很難過 要找sad
        //i=0    sad 把haystack剪前面n個字母
        //i=1      sad
        //i=2          sad
        int H=haystack.length(),N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N) == needle)return i;
            //從I開始 剪出N個字母

        }
        return -1;//沒找到答案 回傳-1代表失敗
    }
};
