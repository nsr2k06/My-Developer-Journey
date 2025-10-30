#METHOD 1
# f=open("file2.txt")
# print(f.read())
# f.close()

#METHOD 2
with open("file1.txt") as f:
    print(f.read())
