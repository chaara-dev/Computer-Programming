vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]

def is_vowel(letter):
    if letter in vowels:
        return True
    else:
        return False


def replace_vowels(string):
    new_string = []
    for letters in string:
        if is_vowel(letters) == True:
            new_string.append("p")
        elif is_vowel(letters) == False:
            new_string.append(letters)
        else:
            return

    print(''.join(new_string))


fruit_list = ["apples", "bananas", "oranges", "strawberries"]

def replace_vowels_in_list(given_list):
    for letters in given_list:
        replace_vowels(letters)

replace_vowels_in_list(fruit_list)