import string

def password_strength():
    password = str(input("Enter your password here: "))
    letter_count = 0
    number_count = 0
    symbol_count = 0

    for char in password:
        if char == " ":
            print("I cannot check this password strength.")
            return
        elif char in string.ascii_letters:
            letter_count += 1
        elif char in string.digits:
            number_count += 1
        elif char in string.punctuation:
            symbol_count += 1

    if letter_count > 0 and number_count == 1 and symbol_count == 1:
        print("Your password is STRONG.")
    elif letter_count > 0 and number_count > 1 and number_count < 4 and symbol_count == 2:
        print("Your password is VERY STRONG.")
    elif letter_count > 0 and number_count > 4 and symbol_count > 2:
        print("Your password is SUPER STRONG.")
    else:
        print("Your password is WEAK.")

password_strength()