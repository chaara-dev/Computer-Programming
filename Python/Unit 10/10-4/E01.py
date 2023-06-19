letters = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]

import string

def character_count(text):
    letter_count = 0
    space_count = 0
    punctuation_count = 0
    for char in text:
        if char in string.ascii_letters:
            letter_count += 1
        elif char == " ":
            space_count += 1
        elif char in string.punctuation:
            punctuation_count += 1
        else:
            print("error")

    output_list = ["Letters:", letter_count, "Spaces:", space_count, "Punctuation:", punctuation_count, "Length:", len(text)]
    print(output_list)

character_count('"This test was very successful", Tyler stated, knowing full well it was not.')