print("Example of BREAK STATEMENT")
for i in range(10):
    if(i==5):
        break #EXIT RIGHT NOW !
    print(i) #0 1 2 3 4

print("Example of CONTINUE STATEMENT")
for i in range(10):
    if(i==5):
        continue #SKIP RIGHT NOW !
    print(i) #0 1 2 3 4 6 7 8 9 

print("Example of PASS STATEMENT")
for i in range(10):
 #print error
    pass
i=0
while(i<6):
    print(i)
    i+=1
