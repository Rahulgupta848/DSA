// hollow pyramid
//             * 
//           *   *
//         *       *
//       *           *
//     * * * * * * * * *
#include <iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter the value of n : ";
     cin>>n;
     for(int i=0;i<n;i++){
          for(int j=0;j<n-i+1;j++){
               cout<<"  ";
          }
          for(int j=0;j<((i+1)*2)-1;j++){
               if(i==0 || j==0 || i==n-1 || j==((i+1)*2)-2){
                    cout<<"* ";
               }
               else{
                    cout<<"  ";
               }
          }
          cout<<endl;
     }
     return 0;
}