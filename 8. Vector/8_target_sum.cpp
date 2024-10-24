//Find the total number of pairs in the Array whose sum is equal to the given value x.
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {3,4,6,7,1};
    int sum = 7;
    int count = 0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i] + arr[j] == sum){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}