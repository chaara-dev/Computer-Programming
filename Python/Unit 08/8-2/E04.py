def vowel_counter():
    i = 0
    vowel_count = 0
    word_to_count = input("Enter your word: ")
    max_length = len(word_to_count)

    while i < (max_length):
        if word_to_count[i] not in ["a", "e", "i", "o", "u"]:
            i += 1
        elif word_to_count[i] in ["a", "e", "i", "o", "u"]:
            vowel_count += 1
            i += 1
    print(vowel_count)

vowel_counter()