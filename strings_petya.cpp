#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
string s;
string s2;
cin >> s >> s2;

 transform(s.begin(), s.end(), s.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

for(int i = 0; i< s.length(); i++){
    if( s[i] > s2[i] ){ 
        cout << 1;
        return 0;
        }else if (s2[i] > s[i]){
            cout << -1;
            return 0;
        }
}
    cout << 0;
    return 0;
}