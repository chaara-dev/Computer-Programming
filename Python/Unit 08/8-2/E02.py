def ice_cream_shop():
    print("WELCOME TO NEW WEST ICE CREAM SHOP!")
    print("")
    print("We have three flavors for today:")
    print("   > Vanilla")
    print("   > Chocolate")
    print("   > Strawberry")
    print("")
    flavor = input("Please enter the flavor of your choice: ")
    while flavor.lower() != "vanilla" and flavor.lower() != "chocolate" and flavor.lower() != "strawberry":
        flavor = input(
            "Please enter one of the three flavors we have available: ")

    if flavor.lower() == "vanilla":
        scoop_count = int(input("Enter the amount of scoops you want: "))
        valid_scoop_count = False
        while not valid_scoop_count:
            if scoop_count not in [1, 2, 3, 4, 5, 6, 7]:
                scoop_count = int(input("Sorry, you can't have that amount. Please try again: "))
            else:
                valid_scoop_count = True
                break
        print("")
        print("Your total is $", (scoop_count * 3.25))
    elif flavor.lower() == "chocolate":
        scoop_count = int(input("Enter the amount of scoops you want: "))
        valid_scoop_count = False
        while not valid_scoop_count:
            if scoop_count not in [1, 2, 3, 4, 5, 6, 7]:
                scoop_count = int(input("Sorry, you can't have that amount. Please try again: "))
            else:
                valid_scoop_count = True
                break
        print("")
        print("Your total is $", (scoop_count * 3.25))
    elif flavor.lower() == "strawberry":
        scoop_count = int(input("Enter the amount of scoops you want: "))
        valid_scoop_count = False
        while not valid_scoop_count:
            if scoop_count not in [1, 2, 3, 4, 5, 6, 7]:
                scoop_count = int(input("Sorry, you can't have that amount. Please try again: "))
            else:
                valid_scoop_count = True
                break
        print("")
        print("Your total is $", (scoop_count * 3.25))

ice_cream_shop()