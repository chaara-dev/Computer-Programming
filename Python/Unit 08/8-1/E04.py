answer = str(input("Do you like french fries? "))
i = 0

while answer == "no" and i != 3:
    answer = str(input("Do you like french fries? "))
    i = i + 1

if answer == "yes":
    print("Nice, me too!")
elif answer == "no":
    print("I give up.")
