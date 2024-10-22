// WAP to divide people in age groups
#include <iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(0<=age && age<12)
        cout<<"Child";
    else if(12<=age && age<18)
        cout<<"Teenager";
    else
        cout<<"Adult";
}