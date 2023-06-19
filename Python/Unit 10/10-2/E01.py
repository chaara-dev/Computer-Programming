vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]


def is_vowel(letter):
    if letter in vowels:
        return True
    else:
        return False

def count_vowels(string):
    vowel_count = 0
    for letters in string:
        if is_vowel(letters) == True:
            vowel_count = vowel_count + 1
        else:
            vowel_count = vowel_count
    
    print(vowel_count)


count_vowels("amicable")