#CREATING A CLASS

class employee:
    #CLASS ATTRIBUTES
    name="Harry"
    language="Python"
    salary=100000

    #DUNDER METHOD IS CALLED A/U
    def __init__(self,name,salary,language):
       
        self.name=name
        self.salary=salary
        self.language=language
        print("I am Creating an OBJECT ! ")

    def getinfo(self):
        print(f"The Language is {self.language}. The Salary is : {self.salary}")

    def greet(self):
        print("Good Morning Sir !")

#OBJECT ATTRIBUTE HAi
nsr=employee("Nitin",150000,"SDE")
nsr.greet()
print(nsr.name,nsr.salary,nsr.language)
nsr.getinfo()
