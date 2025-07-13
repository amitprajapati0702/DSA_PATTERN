#include <iostream>
using namespace std;
/*

 AAA
 BBB
 CCC

*/

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n; col++)
        {
            char ch = 'A'+ row - 1;
            cout << ch ;
        }
        cout << endl;
    }
}
