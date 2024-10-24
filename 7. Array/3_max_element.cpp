#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,23,23,345,32,45,45,232,45};

    int maxi = INT_MIN;
    for(int i=0;i<10;i++){
        maxi = max(maxi,arr[i]);
    }
    cout<<maxi<<endl;

    int mini = INT_MAX;
    for(int i=0;i<10;i++){
        mini = min(mini,arr[i]);
    }
    cout<<mini;
    return 0;
}