user_input = str(input("Enter your name: "))

for char in user_input:
    if char == "a" or char == "A":
        print(char)
    else:
        print("*")