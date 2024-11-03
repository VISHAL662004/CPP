#include <iostream>
using namespace std;
int main(){
    int x = 1;
    int *ptr = &x;
    cout<<x<<" "<<ptr<<" "<<*ptr<<endl;

    *ptr = *ptr+1;
    cout<<x<<" "<<ptr<<" "<<*ptr<<endl;

    ptr++;
    cout<<x<<" "<<ptr<<" "<<*ptr<<endl;
    return 0;
}