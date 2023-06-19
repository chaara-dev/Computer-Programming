def mystery_game_two():
    guess = int(input("Enter a number between 1 and 100: "))
    guess_count = 3

    for i in range(3):
        if guess > 77:
            guess_count = guess_count - 1
            print("Too high,", guess_count, "guesses left.")      
            if guess_count == 0:
                print("You lose.")
                return
            else:
                guess = int(input("Enter a number between 1 and 100: "))
        elif guess < 77:
            guess_count = guess_count - 1
            print("Too low,", guess_count, "guesses left.")      
            if guess_count == 0:
                print("You lose.")
                return
            else:
                guess = int(input("Enter a number between 1 and 100: "))
        elif guess == 77:
            print("You got it right.")
            return

mystery_game_two()