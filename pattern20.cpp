#include<iostream>
using namespace std ;

int main(){
   int n;
   cin >> n ;
   /*
       1
      121
     12321
    1234321
   123454321
   
   
   */

   int i = 1;
   while(i<=n){
      //print a spaze
      int space = n-i;
      while(space){
         cout<<" ";
         space--;
      }
      //print 1 triangle
      int j= 1;
      while(j<=i){
         cout << j ;
         j++;
      }
      //print 3 triangle
      int start = i-1;
      while(start){
         cout<<start;
         start--;
      }

      cout<<endl;
      i++;
   }

}