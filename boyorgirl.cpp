#include <iostream>

using namespace std;
int main(){
    string str;
    cin >> str;
    
    int count = 0;

    for (int i = 0; i < str.length(); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    if(!(count % 2==0)) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}