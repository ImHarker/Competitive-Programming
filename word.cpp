#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
string s;
int lc= 0, uc=0;
cin >> s;

for(int i = 0; i< s.length(); i++){
    if(s[i] >= 'A' && s[i] <= 'Z'){
        uc++;
    }else{if(s[i] >= 'a' && s[i] <= 'z'){
        lc++;
    }}
}
if(lc >= uc)
 transform(s.begin(), s.end(), s.begin(), ::tolower);
else
 transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
    return 0;
}