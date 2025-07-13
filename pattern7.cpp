#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /*
          *
         **
        ***
       ****
      *****
    
    
    */
    for(int i = n-1;i>=0;i--){
        for(int k = 0;k<i;k++){
            cout << " ";
        }
        for(int j = n-1;j>=i;j--){
            cout << "*";
        }
        cout << endl;
    }
}