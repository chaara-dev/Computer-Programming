u_list = [1, 1, 2, 3, 5, 8, 13, 21]
i = 0

if len(u_list) > 9 or len(u_list) < 0:
    print("I can't do that.")
else:
    while i < len(u_list):
        u_list.pop(-1)
        print("There are", len(u_list), "items left in your list")