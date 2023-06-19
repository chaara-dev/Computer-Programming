def is_word(word):
    firstLetter = word[0]
    lastLetter = word[-1]

    if firstLetter.isalpha() == True and lastLetter.isalpha() == True and word != "":
        return "That's a word!"
    else:
        return "That's not a word!"


print(is_word("H3llo"))