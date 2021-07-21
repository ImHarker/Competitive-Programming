#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;

int main(){

int h, n;
int total=0;
cin >> n >> h;
int *v = new int[n];

for(int i=0; i < n; i++){
cin >> v[i];
}

	for (int i = 0; i< n; i++){
		if(v[i] > h) total+=2;
		else total++;
	}
	cout << total;
    delete[] v;
return 0;
}