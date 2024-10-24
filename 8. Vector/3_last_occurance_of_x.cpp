// WAP to find the last occurance of an element x
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(10);
    for(int i=0;i<10;i++){
        cin>>v[i];
    }

    int x;  cin>>x;
    for(int i = 9;i>=0;i--){
        if(x == v[i]){
            cout<<i;
            break;
        }
    }
    
    return 0;
}