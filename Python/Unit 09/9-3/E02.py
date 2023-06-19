def ice_cream_shop():
    flavor_list = ["Banana Fudge", "Strawberry", "Vanilla", "Pistashio", "Chocolate"]
    flavor_one = ""
    flavor_two = ""
    flavor_three = ""
    flavor_four = ""
    flavor_five = ""

    print("Welcome to New West Ice Cream Store")
    print("We have these flavors for sale today:")
    print("1. Banana Fudge")
    print("2. Strawberry")
    print("3. Vanilla")
    print("4. Pistashio")
    print("5. Chocolate")
    print("")
    print("")

    flavor_count = int(input("Please enter the number of flavors you're buying today: "))
    while flavor_count > 5 or flavor_count < 0:
        print("Sorry, we can't do that.")
        flavor_count = int(input("Please enter the number of scoops you're buying today: "))

    print("Great! What flavors would you like to buy? (Enter the names as shown above)")

    if flavor_count == 1:
        flavor_one = str(input("1. -"))
        while flavor_one not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_one = str(input("1. -"))
    elif flavor_count == 2:
        flavor_one = str(input("1. -"))
        while flavor_one not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_one = str(input("1. -"))
        flavor_two = str(input("2. -"))
        while flavor_two not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_two = str(input("2. -"))
    elif flavor_count == 3:
        flavor_one = str(input("1. -"))
        while flavor_one not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_one = str(input("1. -"))
        flavor_two = str(input("2. -"))
        while flavor_two not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_two = str(input("2. -"))
        flavor_three = str(input("3. -"))
        while flavor_three not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_three = str(input("3. -"))
    elif flavor_count == 4:
        flavor_one = str(input("1. -"))
        while flavor_one not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_one = str(input("1. -"))
        flavor_two = str(input("2. -"))
        while flavor_two not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_two = str(input("2. -"))
        flavor_three = str(input("3. -"))
        while flavor_three not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_three = str(input("3. -"))
        flavor_four = str(input("4. -"))
        while flavor_four not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_four = str(input("4. -"))
    elif flavor_count:
        flavor_one = str(input("1. -"))
        while flavor_one not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_one = str(input("1. -"))
        flavor_two = str(input("2. -"))
        while flavor_two not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_two = str(input("2. -"))
        flavor_three = str(input("3. -"))
        while flavor_three not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_three = str(input("3. -"))
        flavor_four = str(input("4. -"))
        while flavor_four not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_four = str(input("4. -"))
        flavor_five = str(input("5. -"))
        while flavor_five not in flavor_list:
            print("")
            print("Sorry, please enter a valid flavor.")
            flavor_five = str(input("5. -"))

    print("")
    print("Here is your flavor list:")
    chosen_flavor_list = []
    if flavor_count == 1:
        chosen_flavor_list = [flavor_one]
    elif flavor_count == 2:
        chosen_flavor_list = [flavor_one, flavor_two]
    elif flavor_count == 3:
        chosen_flavor_list = [flavor_one, flavor_two, flavor_three]
    elif flavor_count == 4:
        chosen_flavor_list = [flavor_one, flavor_two, flavor_three, flavor_four]
    elif flavor_count == 5:
        chosen_flavor_list = [flavor_one, flavor_two, flavor_three, flavor_four, flavor_five]
    else:
        return

    print(chosen_flavor_list)


ice_cream_shop()