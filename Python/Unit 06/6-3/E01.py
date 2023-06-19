APPLE_PRICE = 3.80
BANANA_PRICE = 1.72
ORANGE_PRICE = 3.56

print("Welcome to Tyler's Fruit Stand!")
print("Due to simply not wanting sell more fruit, we only have THREE options today!")
print("Apples")
print("Bananas")
print("Oranges")
print("\n\n")


wantToBuy = input("Do you want to buy some fruits? yes or no: ").lower()

if wantToBuy == "yes" or "ok" or "sure" or "yeah":
    print("You may only buy one fruit at a time.")
    userInput = input("Enter your desired fruit here: ").lower()

    if userInput == "apple" or userInput == "apples":
        totalApples = int(input("Enter how many kg of apples you want: "))
        print("Your total is $", str(round(totalApples * APPLE_PRICE, 2)))
    elif userInput == "banana" or userInput == "bananas":
        totalBananas = int(input("Enter how many kg of bananas you want: "))
        print("Your total is $", str(round(totalBananas * BANANA_PRICE, 2)))
    elif userInput == "orange" or userInput == "oranges":
        totalOranges = int(input("Enter how many kg of oranges you want: "))
        print("Your total is $", str(round(totalOranges * ORANGE_PRICE, 2)))
    else:
        print("Sorry, we don't sell that here.")
    
else:
    print("Well, thanks for coming!")