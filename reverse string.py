def reverse(s): 
    if len(s) == 0: 
        return s 
    else: 
        return reverse(s[1:]) + s[0] 
s=input("")
  
print ("",end="") 
print (s) 
  
print ("",end="") 
print (reverse(s))
