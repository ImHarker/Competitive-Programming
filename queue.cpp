#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, t;
    string s;
    cin >> n >> t >> s;

    while(t!=0){
    for(int i=0; i< n; i++){
        if(s[i] == 'B' && s[i+1] == 'G'){
            s[i] = 'G';
            s[i+1] = 'B';
            i++;
        }
    }
    t--;
    }
    cout << s;
    return 0;
}
