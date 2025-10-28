#WAP TO SUM N NATURAL NUMBERS 

def sumn(n):
    sum=(n*n+n)/2
    return sum

t1=sumn(5)
print(t1)

t2=sumn(10)
print(t2)

t3=sumn(8)
print(t3)

print("BY METHOD 2 RECURSION .....")
def m2(terms):
    if(terms==1):
        return 1
    return m2(terms-1)+terms

v1=sumn(5)
print(v1)

v2=sumn(10)
print(v2)

v3=sumn(8)
print(v3)