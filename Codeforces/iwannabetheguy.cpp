#include <iostream>

using namespace std;
int main(){
int n;
int v[100];
int p,q;
int a;
bool flag = false;
for (int i=0; i< 100; i++){
    v[i] = 0;
}
cin >> n;

cin >> p;
for(int i=0; i<p;i++){
    cin >> a;
    v[a-1] = 1;
}
cin >> q;
for(int i=0; i<q;i++){
    cin >> a;
    v[a-1] = 1;
}
for (int i=0; i< n; i++){
   if(v[i] != 1) flag = true;
}
if(flag) cout << "Oh, my keyboard!";
else cout << "I become the guy.";
}