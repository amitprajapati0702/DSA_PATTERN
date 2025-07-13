#include<iostream>
using namespace std;

int main(){
    int n ; 
    cin >> n;
    /*
    
        A A A A A
        B B B B B
        C C C C C
        D D D D D
        E E E E E
    
    */
    for(int i = 0 ; i<=n;i++){
          char ch = 'A'+i;
        for(int j = 0 ; j<=n ; j++){
            cout << ch <<" ";
            
        }
        cout << endl ;
    }
}