fruit_list_lists = [["Mandarin Oranges", "Saba Bananas", "Honeycrisp Apples"], ["Apple Bananas", "Blood Oranges", "Granny Smith Apples"], ["Lady Finger Bananas", "Fuji Bananas", "Navel Oranges"]]

for each in fruit_list_lists:
    if type(each) == list:
        for each2 in each:
            if each2 == "Saba Bananas":
                print("You have my favorite!")
            else:
                pass
    else:
        if each == "Saba Bananas":
            print("You have my favorite!")
        else:
            pass