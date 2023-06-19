u_tuple = ("thing1", "thing2", "thing3", "idk", 4, "ok good enough")

u_list = list(u_tuple)
i = 0

if len(u_list) > 9 or len(u_list) < 0:
    print("I can't do that.")
else:
    while i < len(u_list):
        print("There are", len(u_list), "items left in your list")
        u_list.pop(-1)
