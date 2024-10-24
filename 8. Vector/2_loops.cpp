#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;  cin>>n;

    for(int i = 0;i<n;i++){
        int element;    cin>>element;
        v.push_back(element);
    }

    int j = 0;
    while(j<n){
        cout<<v[j]<<" ";
        j++;
    }
    cout<<endl;
    // for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }

    return 0;
}