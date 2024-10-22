// s = 1 - 2 + 3 - 4 ... n
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int oddsum = 0;
    int evensum = 0;
    for(int i=1;i<=n;i+=2){
        oddsum += i;
    }
    for(int i=2;i<=n;i+=2){
        evensum += i;
    }

    // insted of 2 loop we can use if else condition in a single loop

    cout<<oddsum - evensum;
}