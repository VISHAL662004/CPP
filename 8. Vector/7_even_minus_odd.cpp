// find difference of element at odd index - element at even index
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;  cout<<"enter the size of vector : ";  cin>>n;

    vector <int> v;
    cout<<"enter elements of vector : ";
    for(int i = 0; i<n;i++){
        int x;  cin>>x;
        v.push_back(x);
    }

    int sumeven = 0, sumodd = 0;

    for(int i =0;i<n;i++){
        if(i%2==0){
            sumeven += v[i];
        }
        else{
            sumodd += v[i];
        }
    }
    cout<<sumodd - sumeven;
    return 0;
}