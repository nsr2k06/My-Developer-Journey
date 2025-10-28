#WAP TO DELETE A ELEMENT FROM THE LIST
def rem(list1,word):
    for item in list1:
        list1.remove(word)
        return list1
    
l=["Harry","Nitin","Ram","Sam","Gourav"]
word=input("Enter")

print(rem(l,word))