// Check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
#include <iostream>
#include <vector>
using namespace std;
int sum_array(int arr[],int n1, int n2){
    int sum = 0;
    for(int i=n1;i<n2; i++){
        sum += arr[i];
    }

    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5,6,9};
    int sum_whole = sum_array(arr,0,7);
    for(int i=0;i<7;i++){
        int prefix_sum = sum_array(arr,0,i);
        int suffix_sum = sum_whole - prefix_sum;
        if(prefix_sum == suffix_sum){
            cout<<"yes it can be divided after index "<<i-1;
        }
    }
    
    return 0;
}