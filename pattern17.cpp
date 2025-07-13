#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    /*
       A
       B B
       C C C
       D D D D
       E E E E E
    
    */
    for(int i = 0 ; i<=n ; i++){
        for(int j= 0 ; j<i ; j++){
            char ch = 'A'+i-1;
            cout << ch;
        }
        cout << endl ;
    }
}