# Inverted half pyramid
# * * * * 
# * * *   
# * *     
# * 
n=int(input("enter the value of n : "))
for i in range(n-1,-1,-1):
     for j in range(i):
          print("*",end=" ")
     print()