vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]
my_strings = ["eagle", "lunch", "string"]

def first_vowels(list_of_strings):
    for strings in list_of_strings:
        for chars in strings:
            if chars in vowels:
                print(chars)
            else:
                continue

first_vowels(my_strings)