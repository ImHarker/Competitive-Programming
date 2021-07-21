#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include<conio.h>

using namespace std;

int main(){
vector<char> v;
string s;
cin >> s;


for(int i=0; i<= s.length(); i++){
    if((i%2 == 0)){
        v.push_back(s[i]);
    }
    }
    sort(v.begin(), v.end());
    for(int i=0; i < v.size(); i++){
        if(i== v.size() -1) cout << v[i];
        else cout << v[i] << "+";
    }
}