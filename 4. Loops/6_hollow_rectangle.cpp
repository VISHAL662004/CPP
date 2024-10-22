#include <iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row; cin>>col;

    // Method 1
    for(int i=1;i<=col;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=1;i<=row-2;i++){
        cout<<"* ";
        for(int j=1;j<=col-2;j++){
            cout<<"  ";
        }
        cout<<"* "<<endl;
    }
    for(int i=1;i<=col;i++){
        cout<<"* ";
    }
    cout<<endl;
    cout<<endl;

    //Medhod 2
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}