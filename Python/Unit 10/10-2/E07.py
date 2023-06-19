def upper_checker(word):
    total_upper = 0
    for char in word:
        if str(char).isupper():
            total_upper = total_upper + 1
        
    print(total_upper)

upper_checker("CoMpUtEr ScIeNcE")