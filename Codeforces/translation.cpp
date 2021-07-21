#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
string str;
string str2;

cin >> str >> str2;

reverse(str.begin(), str.end());

if(str == str2) cout << "YES";
else cout << "NO";
    return 0;
}