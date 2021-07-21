#include <iostream>

using namespace std;

int main(){
    int n;
    int a,b;
    int total=0;
    int max=0;
    cin >>n;

    for(int i= 0;i < n; i++){
        cin >> a >> b;
        total -= a;
        total +=b;
        if(max < total) max = total;
    }
    cout << max;
}