#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n ;
    /*
     1
     1 2 
     1 2 3
     1 2 3 4 
     1 2 3 4 5
    
    
    */

    for(int i = 0 ; i<=n ; i++){
        for(int j = 1 ; j <=i;j++){
            cout << j << ' ';
        }
        cout << endl ;
    }

}