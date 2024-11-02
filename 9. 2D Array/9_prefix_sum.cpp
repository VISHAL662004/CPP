//Given a matrix 'a' of dimension n x m and 2 coordinates (r1, c1) and (r2, c2). Return the sum of the rectangle from (r1,c1) to (r2, c2).
#include <iostream>
#include<vector>
using namespace std;
int rectangleSum(vector <vector<int> > &v, int r1, int c1, int r2, int c2){
    int sum = 0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum += v[i][j];
        }
    }
    return sum;
}
int main(){
    int n,m;    cin>>n>>m;
    vector<vector<int> > v(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    int r1, c1, r2, c2;
    cin>>r1>>c1>>r2>>c2;

    cout<<rectangleSum(v,r1,c1,r2,c2);
}