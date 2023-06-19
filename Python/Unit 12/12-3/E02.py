
def count_vowels(given_text):
    vowel_list = ["e", "a", "i", "o", "u"]
    e_count = 0
    a_count = 0
    i_count = 0
    o_count = 0
    u_count = 0
    
    for each in given_text:
        if each in vowel_list:
            if each == "e":
                e_count = e_count + 1
            elif each == "a":
                a_count = a_count + 1
            elif each == "i":
                i_count = i_count + 1
            elif each == "o":
                o_count = o_count + 1
            elif each == "u":
                u_count = u_count + 1
        else:
            continue

    dictionary = {"a": a_count, "e": e_count, "i": i_count, "o": o_count, "u": u_count}
    print(dictionary)



count_vowels("Supercalifragilisticexpialidocious")