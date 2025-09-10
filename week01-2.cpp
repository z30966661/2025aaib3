#week01-2.py Leetcode 學習計畫 Python版本1 for迴圈
#Leetcode 28.Find the index of the first occurrence in a string
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)#字串長度
        N=len(needle)#字串長度
        #sadstack
        #sad i:0
        #....
        #sad i:6
        for i in range(H-N+1): #長度9 找長度3 有0...6 共7格
            if haystack[i:i+N] == needle: #兩個相同
            #把字串 從i開始,取到i+N 結束 共n個字
                return i#成功找到位置
        return -1 #沒有成功
