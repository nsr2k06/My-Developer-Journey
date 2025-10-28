#WAP TO FIND THE GREATEST OF THE 3 NUMBERS !

def greatest(a,b,c):
    if(a>b and a>c):
        return a
    elif (a<=b and b>=c):
        return b
    else:
        return c

t1=greatest(1,3,6)
print(t1)

t2=greatest(556,342,1335)
print(t2)

t3=greatest(5,5,1)
print(t3)