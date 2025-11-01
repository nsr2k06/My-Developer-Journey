from random import randint

class train:
    def __init__(self,train_no,fro,to):
        self.train_no=train_no
        self.fro=fro
        self.to=to

    def book(self,train_no,fro,to):
        print(f"Ticket is Booked in Train No : {self.train_no} from {self.fro} to {self.to}")

    def getstatus(self,train_no):
        print(f"Train No: {self.train_no} is Running on Time.")

    def getFare(self,train_no,fro,to):
        print(f"Ticket Fare in Train No : {self.train_no} from {self.fro} to {self.to} is {randint(250,1000)}")

t=train(10101,"New Delhi","Praygraj")

t.book(10101,"New Delhi","Praygraj")
t.getstatus(10101)
t.getFare(10101,"New Delhi","Praygraj")