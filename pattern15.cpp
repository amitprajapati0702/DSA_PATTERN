#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    /*
      A B C D E
      A B C D E
      A B C D E
      A B C D E
      A B C D E
    
    */
for(int i = 0 ; i<=n ;i++){
    char ch='A';
    for(int j = 0 ; j<=n ;j++){
        cout << ch << " ";
        ch++;
    }
    cout << endl ;
}
}