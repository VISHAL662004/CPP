// WAP to find the number f occurance of element x
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

    int occurance;  cout<<"enter number to be found : ";  cin>>occurance;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(occurance == v[i]){
            count++;
        }
    }

    cout<<"the number of time "<<occurance<<"is present in vector is : "<<count;

    return 0;
}