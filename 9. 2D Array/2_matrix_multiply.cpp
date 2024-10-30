#include <iostream>
using namespace std;
int main(){
    int row1;   cin>>row1;
    int col1;   cin>>col1;
    int matrix1[row1][col1];

    int row2;   cin>>row2;
    int col2;   cin>>col2;
    int matrix2[row2][col2];

    if(col1 != row2){
        cout<<"matrix can not be multiplied";
        return 0;
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>matrix1[i][j];
        }
    }

    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>matrix2[i][j];
        }
    }
    
    int productmatrix[row1][col2];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            int product = 0;
            for(int k=0;k<col1;k++){
                product += matrix1[i][k] * matrix2[k][j];
            }
            productmatrix[i][j] = product;
        }
    }

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<productmatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}