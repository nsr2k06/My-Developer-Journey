#FUNCTION DECLARATION
demo_function<-function(){
   
  #FUNCTION BLOCK OF CODE 
  print("Hello World !")
}

demo_function() #FUNCTION CALL

#FUNCTION WITH PARAMETERS
name_function<-function(fname,lname){
  paste(fname,lname)
}

name_function("Nitin","Singh")