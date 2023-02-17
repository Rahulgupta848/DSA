# test case:
#   0 0 2 1 0 2 0 1 2 0 0 0 1 2 2 1 1 0 1 2 0 1 2 0 0 1 1 1

arr=[0,0,2,1,0,2,0,1,2,0,0,0,1,2,2,1,1,0,1,2,0,1,2,0,1,1,1]
low=0
mid=0
high=len(arr)-1

while(mid<=high):
     if(arr[mid]==0):
          arr[low],arr[mid]=arr[mid],arr[low]
          mid+=1
          low+=1
     elif(arr[mid]==1):
          mid+=1
     elif(arr[mid]==2):
          arr[high],arr[mid]=arr[mid],arr[high]
          high-=1
print(arr)