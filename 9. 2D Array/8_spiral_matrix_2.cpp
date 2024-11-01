// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;  cin>>n;
    vector <vector <int> > v(n, vector <int> (n));
    int top = 0, bottom = n-1, left = 0, right = n-1;
    int direction = 0;
    int i = 1;
    while (left <= right && top <= bottom){
        // left -> right
        if(direction ==0){
            for(int col = left; col<=right;col++){
                v[top][col] = i;
                i++;
            }
            top++;
        }

        // top -> bottom
        else if(direction == 1){
            for(int row = top;row<=bottom;row++){
                v[row][right] = i;
                i++;
            }
            right--;
        }

        // right -> left
        else if(direction == 2){
            for(int col=right;col>=left;col--){
                v[bottom][col] = i;
                i++;
            }
            bottom--;
        }

        // bottom-> top
        else{
            for(int row = bottom; row>=top;row--){
                v[row][left] = i;
                i++;
            }
            left++;
        }

        direction = (direction+1)%4;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}