def wrong_first_character(string):
    return string[0]

print(wrong_first_character("Tyler"))

def correct_first_character(string):
    if string == "":
        return "There is no string given, and hence, no first character."
    elif type(string) != str:
        return "Given Input is not a string, cannot take first character."
    else:
        return string[0]

print(correct_first_character("Tyler"))