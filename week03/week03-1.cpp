///week03-1.cpp
///c++陣列vector<int>
#include <iostream>///cin cout要用的
#include <vector>///今天的主題 陣列Vector
using namespace std;
int main()
{
    cout<<"請輸入4個數字:";
    vector<int> a;///伸縮自如的陣列
    int now;
    cin >> now;///現在輸入一個數字
    a.push_back(now);///推到a的最後面
    cin >> now;///現在輸入一個數字
    a.push_back(now);///推到a的最後面

    for(int i=0;i<a.size();i++){
        cout << a[i] << ' ';///數字後面有空格
    }
    cout << "現在程式碼裡面 又推入了99 88兩個數字,結果呢?\n";

    a.push_back(99);///推到a的最後面
    a.push_back(88);///推到a的最後面
    for(int i=0;i<a.size();i++){///依照陣列的大小來印
        cout << a[i] << ' ';///數字後面有空格
    }

}
