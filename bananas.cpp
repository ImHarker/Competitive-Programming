#include <iostream>

using namespace std;
int main(){
    int i,w,k,n;
    cin >> k >>n >>w;
    int total=0;

    for (i = 1; i<=w;i++){
        total += i*k; 
    }
    total -= n;
    if(total <= 0) cout << 0;
    else cout << total;
}