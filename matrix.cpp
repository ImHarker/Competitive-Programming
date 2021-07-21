#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int k;
    int posx, posy;
for(int i= 1; i< 6; i++){
    for(int j=1; j <6; j++){
        cin >> k;
        if(k == 1){
            posx = i;
            posy = j;
        }
    }
}
cout << abs(posx-3) + abs(posy-3);
    return 0;
}