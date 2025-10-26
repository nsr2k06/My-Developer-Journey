p1="make a lot of money"
p2="visit this link"
p3="click"
p4="follown"
p5="subscribe now"

message=input("Enter the Message : ")

if((p1 in message) or (p2 in message) or (p3 in message) or (p4 in message) or (p5 in message)):
    print("This is a Spam Message !")
else:
    print("No Spam Detected !")
