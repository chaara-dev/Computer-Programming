fruit_list = {"Apple": 4.36, "Banana": 1.65, "Durian": 15, "Orange": 3.43, "Watermelon": 2.50}

def fruit_price_calculator():
    fruit_choice = input("Enter fruit name: ")
    fruit_price = int(input("Enter how many kg: "))

    if fruit_choice not in fruit_list.keys():
        print("Sorry, we can't do that.")
    elif fruit_choice in fruit_list and (int(fruit_price) or float(fruit_price)):
        total_price = fruit_choice * fruit_price
        print("Your total is:", total_price)
    else:
        print("Invalid input is present.")


fruit_price_calculator()