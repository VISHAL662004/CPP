#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3};
    int *ptr = &arr[0];
    cout<<ptr<<" "<<*ptr<<endl;
    cout<<(ptr+1)<<" "<<*(ptr+1)<<endl;
    cout<<arr<<endl<<endl;

    int arr2[] = {3,4,5};
    int *ptr2 = &arr2[0];
    cout<<ptr2<<" "<<*ptr2<<endl;
    cout<<*ptr2++<<endl;
    cout<<arr2[0]<<" "<<arr2[1]<<endl;
    cout<<ptr2<<" "<<*ptr2<<"\n\n\n"; 


    int cri[3] = {7,10,18};
    cout<<cri<<" "<<*cri<<endl;
    cout<<cri+1<<" "<<*(cri+1)<<endl;
    cout<<cri+2<<" "<<*(cri+2)<<endl;

    // method 2 of transversing an array
    int array[5] = {10,9,8,7,6};
    for(int i=0;i<5;i++){
        cout<<*(array + i)<<" ";
    }

    cout<<"\n\n\n"; 

    // Array of pointers to the arrays
    int *p[3] = {arr, arr2, cri};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(p[i] + j) << " ";
        }
        cout << endl;
    }



}