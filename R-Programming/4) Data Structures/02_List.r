#DATA STRUCTURES ON LIST !

list1<- list("apple","banana","chiku","aam")
print(list1) #PURI LIST PRINT KAR DEGA
print(list1[1]) #LIST 1 KA PHELA ELEMENT PRINT KR DEGA

list1[1]<-"Lemon" #1 ELEMENT PAR LEMON KO DAL DIYA INSTEAD OF APPLE 
print(list1[1])
print(list1[2])

print("chiku" %in% list1) #CHECK KARYGA KI CHIKU LIST ME HAI KI NHI OR RESULT ME TRUE FALSE DEGA
print("apple" %in% list1)

append(list1,"Water Melon") #ADDING NEW ELEMENT INSIDE THE LIST 1
print(list1)

append(list1,"Musk Melon",after=2) #ADDING NEW ELEMENT INSIDE THE LIST 1 after 2nd ELEMENT
print(list1)

