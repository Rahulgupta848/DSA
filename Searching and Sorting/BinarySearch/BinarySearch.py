def binarySearch (arr,el):
     start = 0
     end = len(arr)-1
     mid = (start + end)//2
     while(start <= end):
          if(arr[mid] == el):
               print('element found at index ',mid)
               return
          elif(arr[mid] > el):
               end = mid-1
          else:
               start = mid+1
          mid = (start + end)//2
     print('element not found')

def main():
     arr = [1,12,14,18,33,35,37,45,47,48,55,88]
     el = 14
     binarySearch(arr,el)

if __name__ == "__main__":
     main()