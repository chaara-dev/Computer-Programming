def veritcalize_word(word):
    length = 0
    for char in word:
        length = length + 1
        print(char)

    print()
    print("Word Length Match:")
    print(len(word) == length)

veritcalize_word("Hello")