#include <iostream>
using namespace std;
void print(int *arr, int idx, int length){
   if(idx == length)    return;
   if(length ==0) return;
   cout<<arr[idx]<<" ";
   print(arr,idx+1,length);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    print(arr,0,5);
    return 0;
}