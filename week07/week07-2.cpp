///week07-2.cpp
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        ///for(int i=0;i<moves.length();i++)//傳統的for迴圈
        ///  char c=movies[i];//取出字串裡第i個字母
        for(char c:moves){///進階迴圈
            if(c=='U'){///UP
                y++;
            }else if (c=='D'){///down
                y--;
            }else if (c=='L'){///left
                x--;
            }else if (c=='R'){///right
                x++;
            }
        }
        if(x==0 && y==0 )return true;
        else return false;
    }
};
