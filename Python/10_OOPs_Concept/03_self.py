#CREATING A CLASS

class employee:
    #CLASS ATTRIBUTES
    name="Harry"
    language="Python"
    salary=100000

    def getinfo(self):
        print(f"The Language is {self.language}. The Salary is : {self.salary}")

    def greet(self):
        print("Good Morning Sir !")

#OBJECT ATTRIBUTE HAI
rs=employee()
rs.name="Rohit Singh"
print(rs.name,rs.language,rs.salary)

#CLASS ME FUNCTION LENA ARGUMENT PARAMETER LENGE SELF ALWAYS !!!
rs.getinfo() # employee.getinfo(rs)
rs.greet()
