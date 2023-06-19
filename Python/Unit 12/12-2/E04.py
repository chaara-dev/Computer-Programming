correct_anwer = (16, 32, 73)
already_given_hints = 0

def guess_function():
    global already_given_hints
    ready_to_guess = str(input("Are you ready to guess? (yes/no): "))
    if ready_to_guess.lower() == "yes":
        first_number = int(input("First Number: "))
        second_number = int(input("Second Number: "))
        third_number = int(input("Third Number: "))

        if first_number != 16:
            print("Aw, you got it wrong.")
            again = str(input("Try again? (yes/no): "))
            if again.lower() == "yes":
                print("")
                guess_function()
            else:
                print("")
                print("Ok, have a nice day.")
        elif second_number != 32:
            print("Aw, you got it wrong.")
            again = str(input("Try again? (yes/no): "))
            if again.lower() == "yes":
                print("")
                guess_function()
            else:
                print("")
                print("Ok, have a nice day.")
        elif third_number != 73:
            print("Aw, you got it wrong.")
            again = str(input("Try again? (yes/no): "))
            if again.lower() == "yes":
                print("")
                guess_function()
            else:
                print("")
                print("Ok, have a nice day.")
        else:
            print("You got it right!")

    elif ready_to_guess.lower() == "no":
        available_hints = [1, 2, 3, 4]
        ask_for_hints = str(input("Do you want any hints? (yes/no): "))

        if ask_for_hints.lower() == "yes":
            print("")
            print("             ~~~ You only get 3 hints. ~~~")
            print("You have", (3 - already_given_hints), "left.")
            print("1. Find out the highest and lowest number in the mystery code.")
            print("2. Enter an item and check if that item is in the mystery code.")
            print("3. Enter a position and find out what number is in that position.")
            print("4. Enter an item and find out its position in the mystery code.")
            print("")
            what_hint = int(input("Enter the hint number you want (1-4): "))
            while what_hint not in available_hints:
                print("That isn't an available hint.")
                what_hint = int(input("Enter the hint number you want (1-4): "))
            else:
                if what_hint == 1 and already_given_hints < 3:
                    already_given_hints += 1
                    print("The highest number in the code is: 73")
                    print("The lowest number in the code is: 16")
                    guess_function()

                elif what_hint == 2 and already_given_hints < 3:
                    already_given_hints += 1
                    hint_two_guess = int(input("Enter a number: "))
                    if hint_two_guess not in correct_anwer:
                        print("That number IS NOT in the code.")
                        guess_function()
                    elif hint_two_guess == 16 or 32 or 73:
                        print("That number IS in the code.")
                        guess_function()

                elif what_hint == 3 and already_given_hints < 3:
                    already_given_hints += 1
                    hint_three_guess = int(input("Enter a number (1-3): "))
                    if hint_three_guess == 1:
                        print("The first number is: 16")
                        guess_function()
                    elif hint_three_guess == 2:
                        print("The second number is: 32")
                        guess_function()
                    elif hint_three_guess == 3:
                        print("The third number is: 73")
                        guess_function()

                elif what_hint == 4 and already_given_hints < 3:
                    already_given_hints += 1
                    hint_four_guess = int(input("Enter a number: "))
                    if hint_four_guess == 16:
                        print("That number is in the first position.")
                        guess_function()
                    elif hint_four_guess == 32:
                        print("That number is in the second position.")
                        guess_function()
                    elif hint_four_guess == 73:
                        print("That number is in the third position.")
                        guess_function()
                    else:
                        print("That number is not in the code.")
                        guess_function()

                else:
                    print("Sorry, you have no hints left.")
                    guess_function()

        elif ask_for_hints.lower() == "no":
            guess_function()

        else:
            print("Sorry, I didn't understand.")
            again = str(input("Try again? (yes/no): "))
            if again.lower() == "yes":
                print("")
                guess_function()
            else:
                print("")
                print("Ok, have a nice day.")

guess_function()