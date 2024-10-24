// WAP to find the number of number greater than x
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

    int num;  cout<<"enter number : ";  cin>>num;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(num < v[i]){
            count++;
        }
    }

    cout<<"the number of number greater than "<<num<<" are : "<<count;

    return 0;
}