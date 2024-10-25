// Given Q queries, check if the given number is present in the array or not.
// Note: Value of all the elements in the array is less than 10 to the power 5.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;  cout<<"enter the sze of array: ";   cin>>n;
    vector <int> v(n);
    cout<<"enter the array : ";
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    
    // frequency array
    const int N = 1e5 + 10;
    vector <int> freq(N,0);
    for(int i =0;i<N;i++){
        freq[v[i]]++;
    }

    int q;  cout<<"enter the queries: ";    cin>>q;

    while(q--){
        int quereyElement;
        cin>>quereyElement;
        cout<<" : "<<freq[quereyElement]<<endl;
    }
    return 0;
}