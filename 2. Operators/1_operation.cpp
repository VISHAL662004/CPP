#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cin>>num1>>num2;
    cout<<num1 + num2<<endl;
    cout<<num1 - num2<<endl;
    cout<<num1 * num2<<endl;
    cout<<num1 / num2<<endl;
    cout<<num1 % num2<<endl;
    cout<<++num1<<endl;
    cout<<--num2<<endl;
    cout<<endl;
    cout<<(num1 == num2)<<endl;
    cout<<(num1 != num2)<<endl;
    cout<<(num1 > num2)<<endl;
    cout<<(num1 < num2)<<endl;
    cout<<(num1 >= num2)<<endl;
    cout<<(num1 <= num2)<<endl;
    cout<<endl;
    bool exp1 = true;
    bool exp2 = false;
    cout<<(exp1 && exp2)<<endl;
    cout<<(exp1 || exp2)<<endl;
    cout<<(!exp1)<<endl;
}