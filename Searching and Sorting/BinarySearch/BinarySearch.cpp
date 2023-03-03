#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>arr = {1,12,14,18,33,35,37,45,47,48,55,88};
     int el = 90;
     int start = 0;
     int end = arr.size()-1;
     int mid = (start + end)/2;
     while(start <= end){
          if(arr[mid]==el){
               cout<<"element found at "<<mid;
              return mid ;
          }
          else if(arr[mid] > el){
               end = mid-1;
          }
          else{
               start = mid+1;
          }
          mid = (start + end)/2;
     }
     cout<<"element not found"<<endl;
     return 0;
}