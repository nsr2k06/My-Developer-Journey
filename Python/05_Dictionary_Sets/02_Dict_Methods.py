marks={
    "Ayush":56,
    "Gourav":65,
    "Nitin":69
}

#items
print(marks.items())

#keys
print(marks.keys())

#values
print(marks.values())

#update
marks.update({"Gourav":99})
print(marks)

#get function
print(marks.get("Gourav")) #value
print(marks.get("Nitin2")) #none
print(marks["Nitin2"]) #error

#copy
#pop
#set default