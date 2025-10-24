# DATA STRUCTURES OF VECTORS 

fruits<-c("banana","apple","mango","lemon","lichi")
print(fruits)
print(fruits[1]) #INDEXING

numbers<- c(1,2,3,4,5,6,7,8,9,10)
print(numbers)

num_trick<-1:15
print(num_trick) #PRINTING IN RANGE

num_check<- 1.5:7.5
print(num_check)

num_check<- 1.5:7.3
print(num_check)

nums<- c(TRUE,FALSE,TRUE,FALSE)
print(nums)
print(length(nums)) #length of the nums Variable

collection<-c(6,8,4,1,2,5,7,12,53)
print(collection)
print(sort(collection)) #SORTING


print(sort(fruits)) #SORTING 
print(fruits[1]) #INDEXING
print(fruits[c(1,4)]) #ACCESSING

fruits[1]<-"Water Melon" #MODIFYING ELEMENTS
print(fruits)


repeat_each<-rep(c(1,2,3),each=5) #REPETITION OF VECTORS
print(repeat_each)

numbers<-seq(from=0,to=100,by=2)
print(numbers)