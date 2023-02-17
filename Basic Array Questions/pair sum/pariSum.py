# Test case
# enter the size of array : 5
# enter the sum : 60
# enter the array elements : 30 40 30 20 10

n=int(input("enter the size of array : "))
sum=int(input("enter the sum : "))
arr=[int(x) for x in input("enter the array elements : ").split(' ')]

def approach1(arr,sum):
     for i in range(len(arr)-1):
          for j in range(i+1,len(arr)):
               if(arr[i]+arr[j]==sum):
                    print("(",arr[i],",",arr[j],")")

def approach2(arr,sum):
     arr.sort()
     first=0
     last=len(arr)-1
     while(first < last):
          if(arr[first]+arr[last] == sum):
               print("(",arr[first],",",arr[last],")")
               first+=1
               last-=1
          elif(arr[first]+arr[last] < sum):
               first+=1
          else:
               last-=1

def approach3(arr,sum):
     s=set(arr)
     for i in range(len(arr)):
          rem=sum-arr[i]
          if(rem in s):
               print("(",arr[i],",",rem,")")


#  solution 1 : time complexity O(n^2) :brute force.
approach1(arr,sum)

#  solution 2 : time complexity O(nlogn)+O(n) :two pointer approach.
approach2(arr,sum)

#  solution 3 : time complexity O(n)+O(n) : dynamic programming,using set or map.
approach3(arr,sum) 