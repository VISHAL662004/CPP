// convert a decimal number to binary
#include <iostream>
using namespace std;
int main(){
    int n;  cin>>n;
    int num = 0;
    int power = 1; 
    while(n>0){
        int paraty = n%2;
        num = num + paraty*power;
        power *= 10;
        n /= 2;
    }
    cout<<num;
}