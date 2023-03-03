#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr , int el){
     int first = 0;
     int last = arr.size()-1;
     int mid = first + (last - first)/2;
     int firstOccuredIndex;
     while(first <= last){
          if(arr[mid]==el){
               firstOccuredIndex=mid;
               last=mid-1;
          }
          else if(arr[mid]<el){
               first = mid+1;
          }
          else{
               last = mid-1;
          }
          mid = first + (last - first)/2;
     }
     return firstOccuredIndex;
}

int lastOccurance(vector<int> arr , int el){
     int first = 0;
     int last = arr.size()-1;
     int mid = first + (last - first)/2;
     int lastOccuredIndex;
     while(first <= last){
          if(arr[mid]==el){
               lastOccuredIndex=mid;
               first = mid + 1;
          }
          else if(arr[mid]<el){
               first = mid+1;
          }
          else{
               last = mid-1;
          }
          mid = first + (last - first)/2;

     }
     return lastOccuredIndex;
}

int main(){
     vector<int> arr={1,2,3,4,5,5,5,5,6,7,8};
     int el = 5;
     cout<<"first occurance of element at index "<<firstOccurance(arr,el)<<endl;
     cout<<"last occurance of element at index "<<lastOccurance(arr,el)<<endl;
     return 0;
}