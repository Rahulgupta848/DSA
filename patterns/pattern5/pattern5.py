# full pyramid
#             * 
#           * * *
#         * * * * *
#       * * * * * * *
#     * * * * * * * * *
n=int(input("enter the value of n : "))
for i in range(n):
     for j in range(n-i+1):
          print(" ",end=" ")
     for j in range(((i+1)*2)-1):
          print("*",end=" ")
     print()