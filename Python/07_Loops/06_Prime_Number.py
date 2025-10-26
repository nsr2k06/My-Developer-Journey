n=int(input("Enter Number : "))

for i in range(2,n):
    if(n%i==0):
        print("Number is Not PRIME !")
        break
    else:
        print(n," is PRIME !")
        break