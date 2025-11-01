class coder:
    company="GFG"
    def __init__(self,name,salary,pincode):
        self.name = name
        self.salary = salary
        self.pincode = pincode

coder1=coder("Nitin",123456,110086)
print("CODER 1 : ")
print(coder1.name,coder1.salary,coder1.company,coder1.pincode)

coder2=coder("Vivek",120000,110086)
coder2.company="Google"
print("CODER 2 : ")
print(coder2.name,coder2.salary,coder2.company,coder2.pincode)