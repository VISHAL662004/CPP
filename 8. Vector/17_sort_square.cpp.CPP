//Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(-10);
    v.push_back(-3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);

    
    vector <int> a;
    int leftptr = 0;
    int rightptr = v.size()-1;
    while(leftptr <= rightptr){
        if(abs(v[leftptr]) > abs(v[rightptr])){
            a.push_back(v[leftptr]*v[leftptr]);
            leftptr++;
        }
        else {
            a.push_back(v[rightptr]*v[rightptr]);
            rightptr--;
        }

    }

    reverse(a.begin(),a.end());

    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}