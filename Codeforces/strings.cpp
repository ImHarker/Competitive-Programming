#include <iostream>

using namespace std;
int main(){
    int k;
    string str;
    cin >> k;
    while(k!=0){
        cin >> str;
        if(str.length() > 10){
            cout << str[0] << str.length() -2 << str[str.length() - 1] << endl;
        }else {
            cout << str << endl;
        }
        k--;
    }
    return 0;
}