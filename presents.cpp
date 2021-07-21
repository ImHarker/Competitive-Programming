#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;

int main(){

int n;

cin >>n;
int *v = new int[n];
for(int i=0; i< n; i++){
 cin >> v[i];
}
for(int j=1; j<= n; j++){
for(int i=1; i<= n; i++){
 if(j == v[i-1]) cout << i << " ";
}
}
delete [] v;
return 0;
}