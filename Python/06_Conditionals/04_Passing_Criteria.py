print("Enter Your 5 Subjects Marks Out of 100 !")

m1=int(input("Enter Marks 1 :"))
m2=int(input("Enter Marks 2 :"))
m3=int(input("Enter Marks 3 :"))
m4=int(input("Enter Marks 4 :"))
m5=int(input("Enter Marks 5 :"))

total_percentage=((100)*(m1+m2+m3+m4+m5)/500)
print("Your Percentage : ",total_percentage)

if(total_percentage>=40):
    print("You are PASS !")
else:
    print("You are FAIL,try Again Next Year !")
