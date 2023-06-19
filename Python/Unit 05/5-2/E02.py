u_num = int(input("Enter a number from 0 to 6: "))
string = "STRING"

def zero_to_six(num):
    return(num >= 0 and num <= 6)
    

if zero_to_six(u_num) == True:
    print(string[:u_num])
else:
    print("ILLEGAL!")