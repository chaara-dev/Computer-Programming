name = str(input("Enter your name: "))
vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]

for letter in name:
    if letter in vowels:
        break
    else:
        print(letter)