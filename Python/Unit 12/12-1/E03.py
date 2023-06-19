def function(input_list):
    vowel_list = ["a", "e", "i", "o", "u"]
    consonant_list = ["b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"]
    vowel_count = 0
    consonant_count = 0

    for item in input_list:
        if type(item) == list:
            try:
                for each in item:
                    for letter in each:
                        if letter in vowel_list:
                            vowel_count += 1
                        elif letter in consonant_list:
                            consonant_count += 1
                        else:
                            continue
            except:
                continue
        elif type(item) != list:
            try:
                for stuff in item:
                    if stuff in vowel_list:
                        vowel_count += 1
                    elif stuff in consonant_list:
                        consonant_count += 1
                    else:
                        continue
            except:
                continue
    
    print("Vowel count:", vowel_count)
    print("Consonant count:", consonant_count)


function([["Mandarin Oranges", "Saba Bananas", "Honeycrisp Apples"], ["Apple Bananas", "Blood Oranges", "Granny Smith Apples"], ["Lady Finger Bananas", "Fuji Bananas", "Navel Oranges"]])

print("-------------------")

function([1.5, ["one half", 2.2, "two halves"]])