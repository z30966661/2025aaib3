///week04-1.cpp
///複習vector<int>a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> a;///上週教過伸縮自如的陣列
    cout << "a的長度是"<< a.size()<<endl;

    a.push_back(99);
    cout << "經過,push_back()後a的長度變" << a.size()<<endl;

    vector <int> b(3);///伸縮自如的陣列 長度是3
    cout << "b的長度是"<< b.size()<<endl;
    b.push_back(99);
    for(int i=0;i<b.size();i++)cout << b[i] <<' ';
    cout << "經過.push_back(99)後b變長了" << endl;

    vector<int> c(3,88);
    for(int i=0;i<c.size();i++)cout << c[i] << ' ';
    cout << "初始化(3,88)就會是3個88" << endl;






}
