def mystery_game():
    num_one = int(input("First number: "))
    if num_one != 7:
        print("You got it wrong.")
        return
    num_two = int(input("Second number: "))
    if num_two != 7:
        print("You got it wrong.")
        return
    num_three = int(input("Third number: "))
    if num_three != 7:
        print("You got it wrong.")
        return

mystery_game()