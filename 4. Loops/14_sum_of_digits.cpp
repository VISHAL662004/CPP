// find the sum of digits in a given number n
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int sum =0;
    while(n>0){
        // int m = n - ((n/10)*10);
        int m = n%10;
        sum += m;
        n = n/10;
    }
    cout<<sum;
}