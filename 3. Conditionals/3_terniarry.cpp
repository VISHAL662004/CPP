// check a number is even odd and divisible by 3 or not
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    num%2==0 ? (num%3==0 ? cout<<"Num is even and divisible by 3" : cout<<"Num is even but not divisible by 3") : (num%3==0 ? cout<<"Num is not even but divisible by 3" : cout<<"Nums is neither even nor divisible by 3");

    return 0;
    
}