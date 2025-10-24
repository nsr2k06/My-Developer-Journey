d={} #empty dict
print(type(d))

sets={1,2,3,5,6,7} #set with values #unordered
print(type(sets))

#empty set ?
b=set()
print(type(b))

#set use unique values
s={1,2,3,4,5,6,7,89,12,3,1,2,5}
print(s)

#empty set
s=set()
print(s)

#add values to set
s.add(100)
s.add(150) #no dublicates allowed
s.add(200)
print(s)

#remove
s.remove(100)
print(s)

#pop
s.pop()
print(s)

#union
s1={1,2,3,4,5}
s2={5,6,7,8,9}
print(s1.union(s2))

#intersection

#intersection
s1={1,2,3,4,5}
s2={5,6,7,8,9}
print(s1.intersection(s2))
