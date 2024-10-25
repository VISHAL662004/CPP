// Sort an array consisting only 0 and 1
#include <iostream>
using namespace std;
int main(){
    
    // Method 1
        // int arr[] = {1,1,0,0,1,0,1,0};
        // int num0 = 0;
        // for(int i = 0;i<8;i++){
        //     if(arr[i]==0){
        //         num0++;
        //     }
        // }
        // for(int i = 0;i<8;i++){
        //     if(i<num0)
        //         arr[i] = 0;
        //     else
        //         arr[i] = 1;
        // }

        // for(int i = 0;i<8;i++){
        //     cout<<arr[i]<<" ";
        // }

    // Method 2
    vector <int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    int leftPtr = 0;
    int rightPtr = v.size()-1;

    while(leftPtr < rightPtr){
        if(v[leftPtr]==1 && v[rightPtr]==0){
            swap(v[leftPtr],v[rightPtr]);
            leftPtr++;
            rightPtr--;
            // can be done in single line like - swap(v[leftPtr++],v[rightPtr--]);
        }
        if(v[leftPtr] == 0){
            leftPtr++;
        } 
        if(v[rightPtr] == 1){
            rightPtr--;
        }
    }

    for(int i = 0;i<8;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}