// Test case
// enter the size of array : 5
// enter the sum : 60
// enter the array elements : 30 40 30 20 10

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void approach1(vector<int>arr,int sum){
     for(int i=0;i<arr.size()-1;i++){
          for(int j=i+1;j<arr.size();j++){
               if(arr[i]+arr[j]==sum){
                    cout<<"("<<arr[i]<<","<<arr[j]<<") ";
               }
          }
     }
     cout<<endl;
}

void approach2(vector<int>arr , int sum){
     sort(arr.begin(),arr.end());
     int first=0;
     int last=arr.size()-1;
     while(first<last){
          if(arr[first]+arr[last] == sum){
               cout<<"("<<arr[first]<<","<<arr[last]<<") ";
               first++;
               last--;
          }
          else if(arr[first]+arr[last] < sum){
               first++;
          }
          else{
               last--;
          }
     }
}

int main(){
     int n;
     int sum;
     cout<<"enter the size of array : ";
     cin>>n;
     cout<<"enter the sum : ";
     cin>>sum;
     cout<<"enter the array elements : ";
     vector<int>arr(n,0);
     for (int i=0;i<n;i++){
          cin>>arr[i];
     }

     // solution 1 : time complexity O(n^2) :brute force.
     approach1(arr,sum);
    
     // solution 2 : time complexity O(nlogn)+O(n) :two pointer approach.
     approach2(arr,sum);

     return 0;
}