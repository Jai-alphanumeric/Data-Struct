#include <iostream>

using namespace std;

void reverse(int arr[], int n){
    for(int i = 0; i < n/2; ++i){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
}

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    reverse(arr, n);
    return 0;
}
