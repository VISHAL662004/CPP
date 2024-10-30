#include <iostream>
#include <vector>
using namespace std;
int factorial(int f){
    int product = 1;
    for(int i=1;i<=f;i++){
        product *= i;
    }
    return product;
}
int combination(int i, int j){
    return factorial(i)/(factorial(j)*factorial(i-j));
}
int main(){
    int n;  cin>>n;

    vector<vector<int> > v;

    for(int i=0;i<n;i++){
        v.push_back(vector<int>(i+1));
        for(int j=0;j<=i;j++){
            v[i][j] = combination(i,j);
        }
    }

    for(int i=0;i<n;i++){ 
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}