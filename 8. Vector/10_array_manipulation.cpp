//Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,1,3,2,4,1};
    for(int i = 0;i<7;i++){
        for(int j = i+1;j<7;j++){
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = -1;  // array manipulation
            }
        }
    }

    for(int i = 0;i<7;i++){  
        if(arr[i] != -1){
            cout<<arr[i];
        }
    }
    return 0;
}