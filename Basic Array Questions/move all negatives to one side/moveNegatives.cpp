// Test case
//      18,-12,4,6-77,-1,0,100,-2,5,7,-65,-87,13,-14,15,-5
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
     vector<int>arr{18,-12,4,6-77,-1,0,100,-2,5,7,-65,-87,13,-14,15,-15};
     int low=0;
     int high=arr.size()-1;
     while(low<high){
          if(arr[low]<0){
               low++;
          }
          else if(arr[high]>=0){
               high--;
          }
          else{
               int d=arr[low];
               arr[low]=arr[high];
               arr[high]=d;
               low++;
               high--;
          }
     }
     printArray(arr);
     return 0;
}