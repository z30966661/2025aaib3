#week01-2.py Leetcode �ǲ߭p�e Python����1 for�j��
#Leetcode 28.Find the index of the first occurrence in a string
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)#�r�����
        N=len(needle)#�r�����
        #sadstack
        #sad i:0
        #....
        #sad i:6
        for i in range(H-N+1): #����9 �����3 ��0...6 �@7��
            if haystack[i:i+N] == needle: #��ӬۦP
            #��r�� �qi�}�l,����i+N ���� �@n�Ӧr
                return i#���\����m
        return -1 #�S�����\
