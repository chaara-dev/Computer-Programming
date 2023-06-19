my_list = [1, 2, 3]

for i in my_list:
    print(my_list)
    if i == 3:
        x = my_list.index(3)
        my_list.pop(x)
        z = i * 4
        my_list.insert(x, z)
        print(my_list)