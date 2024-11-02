#include <iostream>
using namespace std;
void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;

    swap(ptr1, ptr2);

    cout<<x<<" "<<y;


}