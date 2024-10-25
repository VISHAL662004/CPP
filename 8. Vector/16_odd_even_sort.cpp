//Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    int leftptr = 0;
    int rightptr = a.size()-1;
    while(leftptr < rightptr){
        if(a[leftptr] %2 !=0 && a[rightptr]%2==0)
            swap(a[leftptr++],a[rightptr--]);
        if(a[leftptr]%2==0)
            leftptr++;
        if(a[rightptr]%2 != 0)
            rightptr--;  
    }

    for(int ele: a){
        cout<<ele<<" ";
    }


    return 0;
}