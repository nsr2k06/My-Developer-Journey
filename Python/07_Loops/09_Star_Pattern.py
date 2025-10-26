"""
   *
  ***
 ***** 
"""

row=int(input("Enter No. of ROWS : "))
for i in range(1,row+1):
    print(" "*(row-i)) #SPACES
    print("*"*(2*i-1),end=" ") #STARS
    print("\n") #NEW LINE
