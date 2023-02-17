# Test case
#       18,-12,4,6-77,-1,0,100,-2,5,7,-65,-87,13,-14,15,-5

arr=[18,-12,4,6-77,-1,0,100,-2,5,7,-65,-87,13,-14,15,-5]
low=0
high=len(arr)-1
while(low<high):
     if(arr[low]<0):
          low+=1
     elif(arr[high]>=0):
          high-=1
     else:
          arr[low],arr[high]=arr[high],arr[low]
print(arr)