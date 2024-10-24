// WAP to check a vector is sorted or not
#include <iostream>
#include <vector>
using namespace std;
bool sorted(vector <int> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i] > v[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;  cout<<"enter the size of vector : ";  cin>>n;

    vector <int> v;
    cout<<"enter elements of vector : ";
    for(int i = 0; i<n;i++){
        int x;  cin>>x;
        v.push_back(x);
    }

    cout<<sorted(v);
    return 0;
}