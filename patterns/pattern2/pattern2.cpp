// Hollow square (n*n)
//   * * * * * 
//   *       * 
//   *       * 
//   *       *
//   * * * * *
#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "enter value of n : ";
     cin >> n;
     cout << endl;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
               {
                    cout << "* ";
               }
               else{
                    cout<<"  ";
               }
          }
          cout << endl;
     }
}