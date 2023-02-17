// test case:
//  0 0 2 1 0 2 0 1 2 0 0 0 1 2 2 1 1 0 1 2 0 1 2 0 0 1 1 1

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>arr){
     for(int i=0;i<arr.size();i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
     vector<int>arr{0,0,2,1,0,2,0,1,2,0,0,0,1,2,2,1,1,0,1,2,0,1,2,0,1,1,1};
     int low=0;
     int mid=0;
     int high=arr.size()-1;
     while(mid<=high){
          if(arr[mid]==0){
               int d=arr[low];
               arr[low]=arr[mid];
               arr[mid]=d;
               mid++;
               low++;
          }
          else if(arr[mid]==1){
               mid++;
          }
          else if(arr[mid]==2){
               int d=arr[mid];
               arr[mid]=arr[high];
               arr[high]=d;
               high--;
          }
     }

     printArray(arr);
     return 0;
}