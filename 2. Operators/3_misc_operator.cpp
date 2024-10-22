#include <iostream>
using namespace std;
int main(){
    int a = 1;
    cout<<sizeof(a)<<endl;
    char c = 'a';
    cout<<sizeof(c)<<endl;

    int x;
    a==c? x = 1: x=0;
    cout<<x<<endl;
    cout<<&x<<endl;

    cout<<(4+2+"pqr")<<endl;
    cout<<("pqr"+4+2)<<endl;
}