#include <iostream>
#include <string>
using namespace std;
int main(){

   string x,y;

   cin >> x >>y;

   for(int i =0; i< x.length(); i++){
       cout << (x[i]^y[i]);
   }
 
    return 0;
}