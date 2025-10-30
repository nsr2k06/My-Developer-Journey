f=open("file2.txt")

lines=f.readlines() #readlines() for all lines
print(lines)

print(" ")

# l1=f.readline() #readline() for one line at a time
# print(l1,type(l1))

# l2=f.readline() #readline() for one line at a time
# print(l2,type(l2))

# l3=f.readline() #readline() for one line at a time
# print(l3,type(l3))

line=f.readline()
while(line!=""):
    print(line)

f.close()