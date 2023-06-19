def new_westminster_store():
    product_or_prices = int(input("Enter (1) for Product list / Enter (2) for Price Calculator: "))

    if product_or_prices == 1: 
        # Product List
        print("~~ Fruits ~~")
        print("Apple:   $4.36/kg\nBanana:  $1.65/kg\nCherry:  $4.40/kg\nOrange:  3.43/kg\nWatermelon:   $2.50/kg")
        print("")
        print("~~ Vegetables ~~")
        print("Carrot: $2.46/kg\nCelery: $2.65/kg\nPotato: $1.54/kg\nOnion: $2.67/kg\nTomato: $2.80/kg")
        print("")
        print("")
        new_westminster_store()

    elif product_or_prices == 2:
        total_price = 0
        # Prices Calculator
        fruits_dictionary = {"apple": 4.36, "banana": 1.65, "cherry": 4.40, "orange": 3.43, "watermelon": 2.50}
        veggies_dictionary = {"carrot": 2.46, "celery": 2.65, "potato": 1.54, "onion": 2.67, "tomato": 2.80}

        food_choice = str(input("Name: ")).lower()
        amount_choice = int(input("Weight: "))

        if food_choice not in fruits_dictionary and food_choice not in veggies_dictionary:
            print("Your input is invalid.")
            return
        elif food_choice in fruits_dictionary:
            for each in fruits_dictionary.keys():
                if each == "apple":
                    total_price = 4.36 * amount_choice
                elif each == "banana":
                    total_price = 1.65 * amount_choice
                elif each == "cherry":
                    total_price = 4.40 * amount_choice
                elif each == "orange":
                    total_price = 4.43 * amount_choice
                elif each == "watermelon":
                    total_price = 2.50 * amount_choice
        elif food_choice in veggies_dictionary:
            for again in veggies_dictionary.keys():
                if again == "carrot":
                    total_price = 2.46 * amount_choice
                elif again == "celery":
                    total_price = 2.65 * amount_choice
                elif again == "potato":
                    total_price = 1.54 * amount_choice
                elif again == "onion":
                    total_price = 2.67 * amount_choice
                elif again == "tomato":
                    total_price = 2.80 * amount_choice
        else:
            print("Your input is invalid.")
    
        print("Your total is: $", total_price)

    else:
        print("Your input is invalid.")

new_westminster_store()

# WIP