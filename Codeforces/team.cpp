#include <iostream>

using namespace std;
int main(){
    int k;
    int count = 0;
    int x,y,z;
    cin >> k;
for (int i =0; i < k; i++){
    cin >> x >> y >> z;
if(x+y+z >= 2) count++;
}
cout << count;
    return 0;
}