// search if a goven element is present in an array or not if not return -1 else return the index
#include <iostream>
using namespace std;
int LinearSearch(int arr[], int size, int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[10] = {1,34,23,56,87,54,67,34,32,12};
    int num;    cin>>num;
    cout<<LinearSearch(arr,10,num);

    return 0;
}