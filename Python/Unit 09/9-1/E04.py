print("Guess the mystery code!")
CORRECT_CODE = ["6", "1", "2"]

first_guess = input("First number: ")
second_guess = input("Second number: ")
third_guess = input("Third number: ")

if first_guess != CORRECT_CODE[0] and second_guess != CORRECT_CODE[1] and third_guess != CORRECT_CODE[2]:
        print("Too bad!")
else:
    print("You won!")