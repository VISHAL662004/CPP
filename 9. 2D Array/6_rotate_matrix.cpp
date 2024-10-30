#include <iostream>
#include <vector>
using namespace std;
void rotateMatrix(vector <vector <int> > &v){
    int n = v.size();

    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // reverse
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){
    int n;   cin>>n;
    vector <vector<int> > v(n,vector <int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
     
    rotateMatrix(v);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    
}