// Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array 'a'.
#include <iostream>
#include <vector>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5};
    int k = 2, l = 0;

    k%=5;
    int arr2[5];
    for(int i = 0;i<5;i++){
        if(i<2){
            arr2[i] = arr[5-k];
            k--;
        }
        else{
            arr2[i] = arr[l];
            l++;
        }
    }   

    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" "; 
    }
    return 0;
}