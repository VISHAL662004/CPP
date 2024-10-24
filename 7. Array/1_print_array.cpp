#include <iostream>
using namespace std;
int main(){
    int n;  cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(char ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}