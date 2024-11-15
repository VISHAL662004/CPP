#include <iostream>
using namespace std;
int power(int p, int q){
    if(q==0) return 1;
    return power(p,q-1)*p;
}

int power2(int p, int q){
    if(q==0)    return 1;
    if(q%2==0){
        int result = power2(p,q/2);
        return result * result;
    }
    else{
        int result = power2(p,(q-1)/2 );
        return p *result*result;
    }
}
int main(){
    int p,q;
    cin>>p>>q;
    cout<<power(p,q)<<endl;;
    cout<<power2(p,q)<<endl;;
    return 0;
}