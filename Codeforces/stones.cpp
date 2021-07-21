#include <iostream>

using namespace std;
int main(){
    char curr = ' ', bef;
    int n,count = 0;

    cin >> n;
    for(int i=0; i< n; i++){
        bef = curr;
        cin >> curr;
        if(bef == curr) count++;
    }
    cout << count;
    return 0;
}