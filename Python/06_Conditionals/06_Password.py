password=input("Enter Password :")
if(len(password)<10):
    print("Weak Password")
if(len(password)>10):
    print("Strong Password !")
    