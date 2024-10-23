#include <iostream>
using namespace std;
int add(int x, int y){
    return x+y;
}
int add(int x, int y, int z){
    return x+y+z;
}
float add(float e, float d){
    return e+d;
}

int main(){
    int a;    cin>>a;
    int b;    cin>>b;
    int c;    cin>>c;
    float e;    cin>>e; 
    float d;    cin>>d;

    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    cout<<add(e,d)<<endl;
}