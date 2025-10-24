#NESTED FUNCTION

#FUNCTION 1
outer_function<-function(x){
  inner_function<-function(y){
    z<-x+y
    return(z)
  }
  return(inner_function)
}

result<-outer_function(12)
result(5)