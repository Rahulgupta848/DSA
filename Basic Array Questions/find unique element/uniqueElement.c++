#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"enter the size of array : ";
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     cout<<endl;
     int ans=arr[0];
     for(int i=1;i<arr.size();i++){
          ans=ans^arr[i];
     }
     cout<<"unique element : "<<ans<<endl;
     return 0;

}

// test case1 = 1 2 3 4 3 2 1