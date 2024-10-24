// Count the number of triplets whose sum is equal to the given value X.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,1,2,4,0,6};
    int sum = 5;
    int count = 0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k = j+1;k<6;k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}