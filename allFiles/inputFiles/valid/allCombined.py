def function(a: int, b: int,)->int:
    i = 0
    c = a + b
    if c == 0 or c == 1:
        print(c, "is neither odd nor even",)
    elif c > 2:
        for i in range(2, c, 1):
            check = c % i
            if c == 0:
                print(c, "is not prime", )
                break
        if i == c:
            print(c, "is prime", )
    else:
        print(c, "is too small", )
        while a < b:
            while c < b:
                print(a, )
                c = c+1
            b = c-1