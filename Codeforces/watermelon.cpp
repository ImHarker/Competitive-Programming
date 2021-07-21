#include <iostream>

using namespace std;
int main(){
    int k;
    cin >> k;
    if(k == 2){
         cout << "NO";
    }else{ 
        if(k%2==0){ 
            cout << "YES";
            }
     else{ 
        cout << "NO";
        }
    }
    return 0;
}