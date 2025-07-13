#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n ;
    /*
    
      321
      321
      321
    
    */
     for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j<n ;j++){
            cout << n-j+1 << " ";
        }
        cout <<endl;
     }

}