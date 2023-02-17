#  test case
#       23,5,1,67,12,73,16,33,33,1,67,5

def approach1(arr):
     for i in range(len(arr)-1):
          for j in range(i+1,len(arr)):
               if(arr[i]==arr[j]):
                    print('first repeating element is : ',arr[i])
                    return
               
def approach2(arr):
     hash_map={}
     for i in arr:
          if i in hash_map:
               hash_map[i]+=1
          else:
               hash_map[i]=0
     for i in arr:
          if hash_map[i]>1:
               print('first repeating element is : ',i)
               return

arr=[23,5,1,67,12,73,16,33,33,1,67]
# solution 1: time complexity O(n^2) : brute force.
approach1(arr)

# solution 2: time complexity O(n) : dynamic programming.
approach2(arr)
