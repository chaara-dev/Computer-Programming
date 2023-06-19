my_numbers = []
added_number = 12
i = 0

while i < 9:
    if i == 0:
        my_numbers.append(added_number)
        added_number = 34
        i += 1
    if i == 1:
        my_numbers.append(added_number)
        added_number = 56
        i += 1
    if i == 2:
        my_numbers.append(added_number)
        added_number = 78
        i += 1
    if i == 3:
        my_numbers.append(added_number)
        added_number = 90
        i += 1
    if i == 4:
        my_numbers.append(added_number)
        added_number = 98
        i += 1
    if i == 5:
        my_numbers.append(added_number)
        added_number = 76
        i += 1
    if i == 6:
        my_numbers.append(added_number)
        added_number = 54
        i += 1
    if i == 7:
        my_numbers.append(added_number)
        added_number = 32
        i += 1
    if i == 8:
        my_numbers.append(added_number)
        added_number = 10
        i += 1

print(my_numbers[3:8])