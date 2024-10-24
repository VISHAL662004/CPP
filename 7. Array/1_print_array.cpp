#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int ele : arr){
        cout<<arr[ele]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<5){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}