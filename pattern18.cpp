#include<iostream>
using namespace std;

int main(){
    int  n ;
    cin >> n ;
    /*
       D
       C D
       B C D
       A B C D
    
    */
    for(int i = 0 ; i<=n ; i++){
        char ch = 'A'+n-i;
        for(int j = 0 ; j<i;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl ;
    }
}