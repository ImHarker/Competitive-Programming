#include <iostream>
#include <string>
using namespace std;
int main(){

   int n;
   cin >> n;
   int a;

   for(int i=0; i< n; i++){
      cin >> a;
      if(a){
         cout << "Hard";
         return 0;
      }
   }
   cout << "Easy";

    return 0;
}