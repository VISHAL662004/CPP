#include <iostream>
using namespace std;
int main(){
    int row;    cin>>row;
    int col;    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         if(row<=col){
    //             swap(arr[row][col],arr[col][row]);
    //         }
    //     }
    // }

    int transpose[col][row];
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            transpose[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}