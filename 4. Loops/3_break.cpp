//print the first multiple of 5 which is also a multiple of 7
#include <iostream>
using namespace std;
int main(){
    int i = 5;
    int j = 1;
    while(true){
        if(i%7==0){
            break;
        }
        i +=5;
    }
    cout<<i;

}