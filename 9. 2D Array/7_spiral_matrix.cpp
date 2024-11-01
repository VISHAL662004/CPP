// Given an xm matrix 'a', return all elements of the matrix in spiral order
#include <iostream>
#include <vector>
using namespace std;
void spiralMatrix(vector <vector <int> > v){
    int top = 0, bottom = v.size()-1, left = 0, right = v[0].size()-1;
    int direction = 0;
    while(left<=right && top <= bottom){
        // left -> right
        if(direction == 0){
            for(int col=left; col<=right; col++){
                cout<<v[top][col]<<" ";
            }
            top++;
        }

        // top -> bottom
        else if(direction == 1){
            for(int row = top; row<=bottom; row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }

        // right -> left
        else if(direction == 2){
            for(int col = right; col>= left; col--){
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }

        // bottom -> top
        else{
            for(int row = bottom; row>=top; row--){
                cout<<v[row][left]<<" ";
            }
            left++;
        }

        direction = (direction + 1)%4; // as directon should be 0,1,2,3
    }
}
int main(){
    int n,m;   cin>>n>>m;
    vector <vector<int> > v(n,vector <int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    spiralMatrix(v);
}