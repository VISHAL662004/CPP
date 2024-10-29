// Given an integers array 'a', return the prefix sum/ running sum in the same array without creating a new array.
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,1,2,3};
    // int sum = 0;
    for(int i = 1;i<5;i++){
        // sum += arr[i];  -> i should start from 0
        // arr[i] = sum;
        arr[i] = arr[i-1] + arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}