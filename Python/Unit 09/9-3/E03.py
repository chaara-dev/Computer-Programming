def mystery_guess_game():
    print("Guess the mystery code 2.0")
    code = [55, 89, 144]
    print("")

    begin = str(input("Are you ready to start? "))

    while begin != "yes":
        begin = str(input("How about now? "))

    hint = str(input("Before we start, do you want a hint? "))
    if hint != "yes":
        hint = str(input("Are you sure? Last chance: "))
        if hint != "yes":
            print("Alright, are you ready to guess now?")
        elif hint == "yes":
            print('The hint is as follows:\n    "the fibbonachi sequence of numbers after (21 and 34)"')
    elif hint == "yes":
        print('The hint is as follows:\n    "the fibbonachi sequence of numbers after (21 and 34)"')


    print("")
    print("Time to guess!")
    guess_one = int(input("First Number: "))
    guess_two = int(input("Second Number: "))
    guess_three = int(input("Third Number: "))

    if guess_one != code[0] or guess_two != code[1] or guess_three != code[2]:
        print("Aw, nice try. You lose!")
    elif guess_one == code[0] and guess_two == code[1] and guess_three == code[2]:
        print("Wow! Nice job! You guessed all the numbers correctly!")

mystery_guess_game()