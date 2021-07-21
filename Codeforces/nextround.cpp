#include <iostream>

using namespace std;
int main(){
    int k, n;
    int count= 0;
    cin >> n >> k;

    int *arr = new int[n];

    for(int i=0; i< n; i++){
        cin >> arr[i];
    }

     for(int i=0; i< n; i++){
        if(i < k){
            if(arr[i] > 0) count++;
        }else{
            if(arr[i] == arr[k-1] && arr[i] > 0)
        count++;
        }
    }
    cout << count;
    delete [] arr;
    return 0;
}