#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,3,43,5,23,46,78,64,32,34};
    int maxi1 = INT_MIN;
    for(int i=0; i<10;i++){
        if(arr[i] > maxi1){
            maxi1 = arr[i];
        }
    }

    cout<<maxi1<<endl;

    int maxi2 = INT_MIN;
    for(int i = 0;i<10;i++){
        if(arr[i] > maxi2 && arr[i] != maxi1){
            maxi2 = arr[i];
        }
    }

    cout<<maxi2;
    return 0;
}