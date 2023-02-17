// test case
//      23,5,1,67,12,73,16,33,33,1,67,5
#include<iostream>
#include<vector>
using namespace std;

void approach1(vector<int> arr){
     for(int i=0;i<arr.size()-1;i++){
          for(int j=i+1;j<arr.size();j++){
               if(arr[i]==arr[j]){
                    cout<<"first repeating element is : "<<arr[i]<<endl;
                    return;
               }
          }
     }
}

int main(){
     vector<int>arr{23,5,1,67,12,73,16,33,33,1,67,5};
// solution 1: time complexity O(n^2) : brute force
     approach1(arr);
     return 0;
}