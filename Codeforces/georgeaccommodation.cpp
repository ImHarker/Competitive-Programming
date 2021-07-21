#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;

int main(){

int n;
int t, o;
int total=0;
cin >> n;

for(int i=0; i < n; i++){
	cin >> o >> t;
	if(t-o >= 2) total++;
}
cout << total;
return 0;
}