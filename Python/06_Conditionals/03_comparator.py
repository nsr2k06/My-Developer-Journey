#COMPARE 4 NUMBER 

a1=int(input("Enter Num 1 :"))
a2=int(input("Enter Num 2 :"))
a3=int(input("Enter Num 3 :"))
a4=int(input("Enter Num 4 :"))

if(a1>a2 and a1>a3 and a1>a4):
    print(a1," Greater")

elif(a2>a1 and a2>a3 and a2>a4):
    print(a2," Greater")

elif(a3>a1 and a3>a2 and a3>a4):
    print(a3," Greater")

else:
    print(a4," Greater") 