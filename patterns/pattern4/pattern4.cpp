// inverted hollow half pyramid
// * * * * * 
// *     *
// *   *
// * *
// *
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter the value of n : ";
     cin>>n;
     for (int i=n;i>0;i--){
          for(int j=0;j<i;j++){
               if(i==n || j==0 || i==j-1 || j==i-1){
                  cout<<"* " ;
               }
               else{
                    cout<<"  ";
               }
          }
          cout<<endl;
     }
     return 0;
}