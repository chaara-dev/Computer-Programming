def guess_the_mystery_number():
    CORRECT_NUMBER = 8927396245
    i = 0
    user_guess = int(input("Enter your guess here: "))

    while user_guess != CORRECT_NUMBER and i != 3:
        user_guess = int(input("Enter your guess here: "))
        i = i + 1

    if user_guess == CORRECT_NUMBER:
        print("Your guess is correct!")
    else:
        print("Thanks for trying!")

print("~GUESS THE MYSTERY NUMBER~")
guess_the_mystery_number()