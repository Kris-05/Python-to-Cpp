# ERROR TYPE - matching integer with string 

i = 10
match i:
    case 1:
        print(1, )
        break
    case "x":
        print("x", )
        break

# OUTPUT - comparison type mismatch in line 6 