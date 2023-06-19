def word_check(word):
    last_letter = word[len(word)-1]
    small_letter_l = "l"
    big_letter_l = "L"

    if len(word) == 5 and last_letter == small_letter_l or last_letter == big_letter_l:
        return("Success")
    else:
        return("Fail")

print(word_check("google"))