#include <iostream>

using namespace std;

int main(){
int x;
int count = 0;
cin >> x;

while(x!= 0){
if(x >= 5){
    x -=5;
}else{if( x < 5) x = 0;}
count++;
}
cout << count;
}