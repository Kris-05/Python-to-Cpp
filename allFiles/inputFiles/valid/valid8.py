# nested while-for loop construct

i = 0                                                                                                                                                                   
limit = 20                                                                                                                                                              
num = 2                                                                                                                                                                 
while num <= limit:                                                                                                                                                     
    is_prime = 1                                                                                                                                                        
    for i in range(2, num, 1):                                                                                                                                          
                check = num % i                                                                                                                                         
        if check == 0:                                                                                                                                                  
            is_prime = 0                                                                                                                                                
            break                                                                                                                                                       
    if is_prime == 1:                                                                                                                                                   
        print(num, "is a prime number", )                                                                                                                               
    num = num + 1 