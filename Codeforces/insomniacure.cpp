#include <bits/stdc++.h>

using namespace std;
int main(){


int k,l,m,n;
int d;
int dmg;
cin >> k >> l >> m >> n >> d;

for(int i=1;i <=d;i++)
if(i%k && i%l && i%m && i%n) dmg++;

cout << d-dmg;
return 0;
}