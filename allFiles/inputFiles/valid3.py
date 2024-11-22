# nested if-else

a = 10                                                                                                                                                                  
b = 20                                                                                                                                                                  
c = 15                                                                                                                                                                  
if a == b and b == c:                                                                                                                                        
        print("All are Equal", )                                                                                                                                        
elif a > b:                                                                                                                                                             
    if a > c:                                                                                                                                                           
        print("a is the largest", )                                                                                                                                     
    else:                                                                                                                                                               
        print("c is the largest", )                                                                                                                                     
else:                                                                                                                                                                   
    if b > c:                                                                                                                                                           
        print("b is the largest", )                                                                                                                                     
    else:                                                                                                                                                               
        print("c is the largest", )
