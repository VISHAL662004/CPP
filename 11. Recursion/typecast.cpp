#include <iostream>
#include <vector>
using namespace std;

    string shiftingLetters(string s,vector<vector<int>>& shifts) {
        for (int i=0;i<shifts.size();i++){
            int k=shifts[i][0];
            for(int j=0;j<shifts[i][1]-shifts[i][0];j++){
                if (shifts[i][2]==1){
                    if(s[k]=='z'){
                        s[k++]='a';
                    }
                    else{
                        int x = s[k];
                        x++;
                        char y = char(x);
                        s[k++]=y;
                    }
                }
                else{
                    if(s[k]=='a'){
                        s[k++]='z';
                    }
                    else{
                        int x = s[k];
                        x--;
                        char y = char(x);
                        s[k++]=y;
                    }
                }
                cout<<s<<endl;
            }
        }
        return s;
    }
int main(){
    // Declare and initialize a variable
    vector<vector<int>> shifts = {{0, 1, 0}, {1, 2, 1}, {0, 2, 1}};

    string s="abc";
    cout<<shiftingLetters(s,shifts);
   
}
