#include<iostream>
using namespace std ; 

int main (){
   int n ;
   cin >> n ;
   /*
      1
      23
      345
      4567
      56789
   */

   for(int i = 0 ; i<=n ; i++){
        //  int value = i;
       for(int j = 1 ; j<=i;j++){

         cout << i+j-1 << "" ;
        //  value++;
       }
       cout << endl ;
  
   }


}