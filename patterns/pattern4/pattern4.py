# inverted hollow half pyramid
# * * * * * 
# *     *
# *   *
# * *
# *
n=int(input("enter the value of n : "))
for i in range(n-1,-1,-1):
     for j in range(i+1):
          if(i==n-1 or j==0 or i==0 or j==i):
               print("*",end=" ")
          else:
               print(" ",end=" ")
     print()