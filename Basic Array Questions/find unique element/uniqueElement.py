n=int(input('Enter the size of array'))
arr=[int(x) for x in input().split(" ")]
ans=arr[0]
for i in range(1,len(arr)):
     ans=ans^arr[i]
print('unique element is ',ans)