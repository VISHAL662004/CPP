//Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
#include <iostream>
#include <vector>
using namespace std;
int count1(vector<vector<int> > v){
    int maxOnes  = INT_MIN;
    int maxOnesRow = -1;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j] == 1){
                int number_of_1 = v[i].size()-j;  // as array is sorted so we need to check only the first occurance of 1
                if(number_of_1 > maxOnes){
                    maxOnes = number_of_1;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}
int leftMostOneRow(vector <vector <int> > v){
    int leftMostOne = -1;
    int maxOneRow = -1;

    int j = v[0].size()-1;
    while(j>=0 && v[0][j] ==1){
        leftMostOne = j;
        maxOneRow = 0;
        j--;
    }

    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j] == 1){
            leftMostOne = j;
            maxOneRow = i;
            j--;
        }
    }

    return maxOneRow;
}
int main() {
    int n,m;
    cin>>n>>m;

   vector<vector<int> > v(n,vector<int> (m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
   }

    cout<<count1(v)<<endl;
    cout<<leftMostOneRow(v)<<endl;
}
