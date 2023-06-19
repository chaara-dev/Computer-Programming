def num_to_vowel(num):
    if num <= 0:
        return "That value is not allowed."
    elif num == 1:
        return "A"
    elif num == 2:
        return "E"
    elif num == 3:
        return "I"
    elif num == 4:
        return "O"
    elif num == 5:
        return "U"
    elif num > 5:
        return "That vlaue is not allowed."

print(num_to_vowel(4))