#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    /*
    
    1
    2 2 
    3 3 3
    4 4 4 4
    
    
    */
    
    for(int i = 0 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout <<i << " ";
        }
        cout << endl ;
    }
}