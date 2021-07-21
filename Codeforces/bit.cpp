#include <iostream>
#include <string>
using namespace std;

int main(){
int n;
string str;
int x = 0;
cin >> n;
for (int i = 0; i< n; i++){
cin >> str;
if (str.find("++") != std::string::npos) {
    x++;
}else{
    x--;
}
}
cout << x;
    return 0;
}