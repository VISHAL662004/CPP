#include <iostream>
using namespace std;
int SumOfDigit(int n){
    if(n>=0 && n<=9) return n;
    
    return SumOfDigit(n/10) + (n%10);
}
int main(){
    int n;  cin>>n;
    cout<<SumOfDigit(n);
}