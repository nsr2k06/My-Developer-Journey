f=open("poem.txt")
content=f.read()

if("twinkle" in content):
    print("Twinkle is Present in the Text File !")
else:
    print("Twinkle is NOT Present in the Text File !")
    
f.close()

