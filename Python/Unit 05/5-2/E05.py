x = str(input("Input your letter"))

def is_vowel(char):
    is_a = char == "a" or char == "A"
    is_e = char == "e" or char == "E"
    is_i = char == "i" or char == "I"
    is_o = char == "o" or char == "O"
    is_u = char == "u" or char == "U"
    return is_a or is_e or is_i or is_o or is_u

print(is_vowel(x))