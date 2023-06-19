fruit_list_lists = [["Mandarin Oranges", "Saba Bananas", "Honeycrisp Apples"], ["Apple Bananas", "Blood Oranges", "Granny Smith Apples"], ["Lady Finger Bananas", "Fuji Bananas", "Navel Oranges"]]

def fruits_seperator(given_list):
    fruit = input("What fruit do you want to search for? ")
    output_list = []
    for each in given_list:
        if type(each) == list:
            for again in each:
                if again.find(fruit) > 0:
                    output_list.append(again)
                    continue
                else:
                    print("That fruit doesn't exist.")
                    return
        elif type(each) != list:
            if each == fruit:
                output_list.append(each)
                continue
            else:
                print("That fruit doesn't exist.")
                return


fruits_seperator(fruit_list_lists)

#something went wrong somewhere