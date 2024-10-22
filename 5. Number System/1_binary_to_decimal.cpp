// convert a binary number to decimal number
#include <iostream>
using namespace std;
int main(){
    int n;  cin>>n;
    int num = 0;
    int power = 1;
    while(n>0){
        int lastdigit = n%10;
        num = (num) + lastdigit*power;
        power *=2;
        n = n/10;
    }
    cout<<num;
}