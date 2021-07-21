#include <iostream>

using namespace std;
int main(){
int n;
double total=0;
double j;

cin >> n;
for(int i = 0; i<n;i++){
    cin >> j;
    total +=j/100;
}
total /=n;
cout << total*100;
}