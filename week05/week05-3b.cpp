///week05-3b.cpp
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while(getline (cin,line)){
        stringstream ss(line);
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout << " "<<word;
        }
        cout << endl;
    }
}
