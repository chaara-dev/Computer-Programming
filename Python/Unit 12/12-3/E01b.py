numbers = {"one": 1, "two": 2, "three": 3, "four": 4, "five": 5}

for each in numbers.keys():
    if each == "three" or each == "five":
        print(each)

items = numbers.items()

for again in items:
    if again == "three":
        i = 0
        while i < 11:
            print(3 * i)
            i += 1