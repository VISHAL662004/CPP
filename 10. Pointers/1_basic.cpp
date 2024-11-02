#include <iostream>
using namespace std;
int main(){
    int x = 1;
    cout<<&x<<endl;
    int *ptr3 = &x;

    int y = 18;
    int *ptr = &y;
    cout<<ptr <<endl;

    bool z = 0;
    bool *ptr2 = &z;
    cout<<ptr2<<" "<<*ptr2;

    cout<<endl<<*ptr3+*ptr;
    return 0;
}