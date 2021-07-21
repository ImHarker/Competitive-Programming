#include <iostream>
#include <string>
using namespace std;
int main(){
    string bef;
    string curr;
    int n,count = 0;

    cin >> n;
       cin >> bef;
    for(int i=0; i< n-1; i++){
       cin >> curr;
       if(bef[1] == curr[0]) count++;
       bef = curr;
    }
    cout << count+1;
    return 0;
}