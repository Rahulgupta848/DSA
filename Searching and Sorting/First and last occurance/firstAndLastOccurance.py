def firstOccurance(arr,el):
     start = 0
     end = len(arr)-1
     mid = start + (end - start)//2
     firstOccuredIndex = -1
     while(start <= end):
          if(arr[mid] == el):
               firstOccuredIndex = mid
               end = mid - 1
          elif(arr[mid]<el):
               start = mid + 1
          else:
               end = mid - 1
          mid = start + (end - start)//2

     return firstOccuredIndex

def lastOccurance(arr,el):
     start = 0
     end = len(arr)-1
     mid = start + (end - start)//2
     lastOccuredIndex = -1
     while(start <= end):
          if(arr[mid] == el):
               lastOccuredIndex = mid
               start = mid + 1
          elif(arr[mid]<el):
               start = mid + 1
          else:
               end = mid - 1
          mid = start + (end - start)//2

     return lastOccuredIndex

def main():
     arr = [1,2,3,4,5,5,5,5,6,7,8]
     el = 5
     print('first occurance is at index ',firstOccurance(arr,el))
     print('last occurance is at index ',lastOccurance(arr,el))

if __name__ == "__main__":
     main()
